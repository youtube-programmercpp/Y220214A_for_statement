#include <stdio.h>

class BaseWriter {
	int         �K�v��              ;
	int         �o�͍ςݕ�����      ;
	virtual void �������o�͂���() = 0;//�������z�֐�
	virtual int ���s�̕K�v��() = 0;
protected:
	int ���݂̕K�v��() const
	{
		return �K�v��;
	}
public:
	BaseWriter
	( int         �K�v��              
	)
		: �K�v��              { �K�v��               }
		, �o�͍ςݕ�����      {                      }//0 ���ݒ肳���
	{
	}
	void �o�͂���()
	{
		�������o�͂���();
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
		�K�v�� = ���s�̕K�v��();
		�o�͍ςݕ����� = 0;//���Z�b�g
	}
	bool �s���ŏ���̏o�͂ƂȂ�() const
	{
		return �o�͍ςݕ����� == 0;
	}
	bool �s���ōŌ�̏o�͂ƂȂ�() const
	{
		return �o�͍ςݕ����� + 1 == �K�v��;
	}
	bool ��ԏ�() const
	{
		return �o�͍ςݕ����� == 0 && �K�v�� == 1;
	}
};
class AsteriskWriter : public BaseWriter {
	void �������o�͂���() override
	{
		if (��ԏ�())
			printf("�O");
		else if (�s���ŏ���̏o�͂ƂȂ�())
			printf("�^");
		else if (�s���ōŌ�̏o�͂ƂȂ�())
			printf("�_");
		else 
			printf("��");
	}
	int ���s�̕K�v��() override
	{
		return ���݂̕K�v��() + 2;
	}
public:
	AsteriskWriter(int �K�v��)
		: BaseWriter{ �K�v�� }
	{
	}
};
class SpaceWriter : public BaseWriter {
	void �������o�͂���() override
	{
		printf("�@");
	}
	int ���s�̕K�v��() override
	{
		return ���݂̕K�v��() - 1;
	}
public:
	SpaceWriter(int �K�v��)
		: BaseWriter{ �K�v�� }
	{
	}
};

int main()
{
	printf("n?");
	int n;
	if (scanf_s("%d", &n) == 1) {
		if (n > 0) {
			SpaceWriter    ��{n - 1};
			AsteriskWriter ����{    1};
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
