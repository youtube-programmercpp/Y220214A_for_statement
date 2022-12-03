#include <stdio.h>
int main()
{
	for (int total = 0;;) {
		int n;
		if (scanf_s("%d", &n) == 1)
			total += n;
		else {
			printf("合計値: %d\n", total);
			break;
		}
	}

}
