#include <stdio.h>
#include <initializer_list>
int main()
{
	for (auto value : { "ABC", "DEF", "GHI"}) {
		printf("%s\n", value);
	}
}
