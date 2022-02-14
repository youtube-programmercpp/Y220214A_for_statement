#include <stdio.h>
int main()
{
	double a[] = { 100, 200, 300 };
	for (auto value : a) {
		printf("%f\n", value);
	}
}
