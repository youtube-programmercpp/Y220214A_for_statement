#include <stdio.h>
int main()
{
	//�ϐ��̒ʗp�͈͂��������邱�Ƃ����
	for (int i = 1, j = 1;   ; ) {
		printf("%d �~ %d = %d\n", i, j, i * j);
		//���
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