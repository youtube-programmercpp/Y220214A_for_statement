#include <stdio.h>

class multiplication {
	int i;
	int j;
public:
	multiplication()
		: i{1}
		, j{1}
	{
	}
	void print() const
	{
		printf("%d �~ %d = %d\n", i, j, i * j);
	}
	bool next()
	{
		if (++j <= 9)
			return true;
		else if (++i <= 9) {
			j = 1;
			return true;
		}
		else
			return false;
	}
};


int main()
{
	//�ϐ��̒ʗp�͈͂��������邱�Ƃ����
	for (multiplication m; ; ) {
		m.print();
		if (m.next())
			continue;
		else
			break;
	}
}