#include <stdio.h>

class Writer {
	const char* �o�͂���������      ;
	int         �K�v��              ;
	int         �s���Ƃ̕K�v���̑���;
	int         �o�͍ςݕ�����      ;
public:
	Writer
	( const char* �o�͂���������      
	, int         �K�v��              
	, int         �s���Ƃ̕K�v���̑���
	)
		: �o�͂���������      { �o�͂���������       }
		, �K�v��              { �K�v��               }
		, �s���Ƃ̕K�v���̑���{ �s���Ƃ̕K�v���̑��� }
		, �o�͍ςݕ�����      {                      }//0 ���ݒ肳���
	{
	}
	void �o�͂���()
	{
		printf("%s", �o�͂���������);
		++�o�͍ςݕ�����;
	}
	bool �S���o�͍ς�() const
	{
		return �o�͍ςݕ����� == �K�v��;
	}
	bool �o�͕s�v() const
	{
		return �K�v�� == 0;
	}
	void ���̍s�̏���()
	{
		�K�v�� += �s���Ƃ̕K�v���̑���;
		�o�͍ςݕ����� = 0;//���Z�b�g
	}
};

int main()
{
	printf("n?");
	int n;
	if (scanf_s("%d", &n) == 1) {
		if (n > 0) {
			Writer ��{"�@", n - 1, -1};
			Writer ����{"��",     1, +2};
			for (;;) {
				if (��.�S���o�͍ς�()) {
					if (����.�S���o�͍ς�()) {
						printf("\n");//���s
						if (��.�o�͕s�v()) {
							//�{���̏I���
							return 0;
						}
						else {
							����.���̍s�̏���();
							��.���̍s�̏���();
						}
					}
					else {
						//����F�܂��o���؂��Ă��Ȃ�
						����.�o�͂���();
					}
				}
				else {
					//�܂��o�͂������Ă��Ȃ�
					��.�o�͂���();
				}
			}
		}
	}
}
