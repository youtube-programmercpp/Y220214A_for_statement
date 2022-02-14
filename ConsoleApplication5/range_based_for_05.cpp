#include <stdio.h>
int main()
{
	for (auto value : "ABC") {
		if (value == '\0')
			break;
		else
			printf("%c\n", value);
	}
}
