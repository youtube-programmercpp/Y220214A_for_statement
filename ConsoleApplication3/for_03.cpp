#include <stdio.h>
int main()
{
	//変数の通用範囲を狭くすることが大切
	for (int i = 1; i <= 9; ++i) {
		for (int j = 1; j <= 9; ++j) {
			int a = i * j;
			printf("%d × %d = %d\n", i, j, a);
		}
	}

}