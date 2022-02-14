#include <stdio.h>
int main()
{
	int i = 0;
	for (;   ; ) {
		if (i < 10) {
			//‚±‚±‚ÉŒJ‚è•Ô‚µ‚½‚¢ˆ—‚ð‘‚­
			printf("%d\n", i);
			++i;
		}
		else
			break;//break•¶cfor •¶‚ðI‚í‚ç‚¹‚é
	}
	printf("for•¶I‚í‚è\n");
}
