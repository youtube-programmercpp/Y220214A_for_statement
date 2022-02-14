#include <stdio.h>
int main()
{
	//char a[] = { 'A', 'B', 'C', '\0'};
	char a[] = "ABC";
	for (auto value : a) {
		if (value == '\0')
			break;
		else
			printf("%c\n", value);
	}
}
