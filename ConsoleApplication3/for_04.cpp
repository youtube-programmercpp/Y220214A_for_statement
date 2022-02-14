#include <stdio.h>
int main()
{
	//•Ï”‚Ì’Ê—p”ÍˆÍ‚ğ‹·‚­‚·‚é‚±‚Æ‚ª‘åØ
	for (int i = 1, j = 1;   ; ) {
		printf("%d ~ %d = %d\n", i, j, i * j);
		//‹ã‹ã
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