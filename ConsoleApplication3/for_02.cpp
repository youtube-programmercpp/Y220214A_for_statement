#include <stdio.h>
int main()
{
	int i = 0;
	for (;   ; ) {
		if (i < 10) {
			//ここに繰り返したい処理を書く
			printf("%d\n", i);
			++i;
		}
		else
			break;//break文…for 文を終わらせる
	}
	printf("for文終わり\n");
}
