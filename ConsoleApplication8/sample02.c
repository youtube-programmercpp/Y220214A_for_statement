#include <stdio.h>
int main()
{
	printf("n?");
	int n;
	if (scanf_s("%d", &n) == 1) {
		if (n > 0) {
			int ����̕K�v�� = 1;
			int �󔒂̕K�v�� = n - 1;
			int �o�͍ς݂̐���̐� = 0;
			int �o�͍ς݂̋󔒂̐� = 0;
			for (;;) {
				if (�o�͍ς݂̋󔒂̐� == �󔒂̕K�v��) {
					//�󔒁F�S���o�͍ς�

					if (�o�͍ς݂̐���̐� == ����̕K�v��) {
						//����F�S���o�͍ς�
						printf("\n");//���s

						if (�󔒂̕K�v�� == 0) {
							//�{���̏I���
							return 0;
						}
						else {
							//
							//���̍s�̏���
							//
							����̕K�v�� += 2;//�P�s�łQ������
							--�󔒂̕K�v��;//�P�s�łP����
							�o�͍ς݂̐���̐� = �o�͍ς݂̋󔒂̐� = 0;//���Z�b�g
						}
					}
					else {
						//����F�܂��o���؂��Ă��Ȃ�
						printf("��");//�S�p����
						++�o�͍ς݂̐���̐�;
					}
				}
				else {
					//�܂��o�͂������Ă��Ȃ�
					printf("�@");//�S�p�X�y�[�X
					++�o�͍ς݂̋󔒂̐�;
				}
			}
		}
	}

}