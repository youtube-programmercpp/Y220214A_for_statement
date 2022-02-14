#include <stdio.h>
int main()
{
	double a[] = { 100, 200, 300, 500, -1, 800 };
	for (auto value : a) {
		if (value == -1)
			break;
		else
			printf("%f\n", value);
	}
}
