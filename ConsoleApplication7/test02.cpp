#include <Windows.h>
#include <iostream>
#include <locale.h>
class files {
	HANDLE hFindFile;
	std::wstring filename;
public:
	files(std::wstring&& filename)
		: hFindFile{INVALID_HANDLE_VALUE}
		, filename(std::move(filename))
	{
	}
	~files()
	{
		if (hFindFile != INVALID_HANDLE_VALUE)
			FindClose(hFindFile);
	}
	bool next(LPWIN32_FIND_DATAW lpFindFileData)
	{
		if (hFindFile == INVALID_HANDLE_VALUE) {
			hFindFile = /*WINBASEAPI HANDLE WINAPI*/FindFirstFileW
			( /*_In_  LPCWSTR            lpFileName    */L"..\\*"
			, /*_Out_ LPWIN32_FIND_DATAW lpFindFileData*/lpFindFileData
			);
			return hFindFile != INVALID_HANDLE_VALUE;
		}
		else {
			return /*WINBASEAPI BOOL WINAPI*/FindNextFileW
			( /*_In_  HANDLE             hFindFile     */hFindFile
			, /*_Out_ LPWIN32_FIND_DATAW lpFindFileData*/lpFindFileData
			);
		}
	}
};

void dir(const std::wstring& dir_with_backslash)
{
	WIN32_FIND_DATAW d;
	for (files f(dir_with_backslash +  L"*"); f.next(&d);) {
		if (d.dwFileAttributes & FILE_ATTRIBUTE_HIDDEN)
			continue;
		else if (d.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) {
			if (lstrcmpW(d.cFileName, L".") == 0)
				continue;
			else if (lstrcmpW(d.cFileName, L"..") == 0)
				continue;
			else
				dir(dir_with_backslash + d.cFileName + L'\\');
		}
		else
			std::wcout << dir_with_backslash + d.cFileName << '\n';
	}
}

int main()
{
	setlocale(LC_ALL, ".ACP");

	dir(L"..\\");
}
