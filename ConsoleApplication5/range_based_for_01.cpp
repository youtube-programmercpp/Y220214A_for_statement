#include <stdio.h>
int main()
{
	int a[] = { 100, 200, 300 };
	//for (int i = 0; i < 3; ++i) {
	//	printf("%d\n", a[i]);
	//}
	for (int value : a) {
		printf("%d\n", value);
	}
}
