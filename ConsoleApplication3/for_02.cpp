#include <stdio.h>
int main()
{
	int i = 0;
	for (;   ; ) {
		if (i < 10) {
			//�����ɌJ��Ԃ���������������
			printf("%d\n", i);
			++i;
		}
		else
			break;//break���cfor �����I��点��
	}
	printf("for���I���\n");
}
