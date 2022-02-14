#include <Windows.h>
#include <iostream>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, ".ACP");

	WIN32_FIND_DATAW d;
	const auto hFindFile = /*WINBASEAPI HANDLE WINAPI*/FindFirstFileW
	( /*_In_  LPCWSTR            lpFileName    */L"..\\*"
	, /*_Out_ LPWIN32_FIND_DATAW lpFindFileData*/&d
	);
	if (hFindFile != INVALID_HANDLE_VALUE) {
		do {
			std::wcout << d.cFileName;
			if (d.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) {
				//ディレクトリである
				std::wcout << " <DIR>";
			}
			else {
				//ファイルである
			}
			std::wcout << '\n';


		} while (/*WINBASEAPI BOOL WINAPI*/FindNextFileW
		( /*_In_  HANDLE             hFindFile     */hFindFile
		, /*_Out_ LPWIN32_FIND_DATAW lpFindFileData*/&d
		));
		FindClose(hFindFile);
	}
}
