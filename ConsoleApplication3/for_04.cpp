#include <stdio.h>
int main()
{
	//変数の通用範囲を狭くすることが大切
	for (int i = 1, j = 1;   ; ) {
		printf("%d × %d = %d\n", i, j, i * j);
		//九九
		if (++j <= 9)
			continue;
		else if (++i <= 9) {
			j = 1;
			continue;
		}
		else
			break;
	}

}