#include <stdio.h>
int main()
{
	//�ϐ��̒ʗp�͈͂��������邱�Ƃ����
	for (int i = 1; i <= 9; ++i) {
		for (int j = 1; j <= 9; ++j) {
			int a = i * j;
			printf("%d �~ %d = %d\n", i, j, a);
		}
	}

}