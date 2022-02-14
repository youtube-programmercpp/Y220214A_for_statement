#include <stdio.h>
int main()
{
	//•Ï”‚Ì’Ê—p”ÍˆÍ‚ğ‹·‚­‚·‚é‚±‚Æ‚ª‘åØ
	for (int i = 1; i <= 9; ++i) {
		for (int j = 1; j <= 9; ++j) {
			int a = i * j;
			printf("%d ~ %d = %d\n", i, j, a);
		}
	}

}