#include <stdio.h>

class BaseWriter {
	int         必要数              ;
	int         出力済み文字数      ;
	virtual void 文字を出力する() = 0;//純粋仮想関数
	virtual int 次行の必要数() = 0;
protected:
	int 現在の必要数() const
	{
		return 必要数;
	}
public:
	BaseWriter
	( int         必要数              
	)
		: 必要数              { 必要数               }
		, 出力済み文字数      {                      }//0 が設定される
	{
	}
	void 出力する()
	{
		文字を出力する();
		++出力済み文字数;
	}
	bool 全部出力済み() const
	{
		return 出力済み文字数 == 必要数;
	}
	bool 出力不要() const
	{
		return 必要数 == 0;
	}
	void 次の行の準備()
	{
		必要数 = 次行の必要数();
		出力済み文字数 = 0;//リセット
	}
	bool 行内で初回の出力となる() const
	{
		return 出力済み文字数 == 0;
	}
	bool 行内で最後の出力となる() const
	{
		return 出力済み文字数 + 1 == 必要数;
	}
	bool 一番上() const
	{
		return 出力済み文字数 == 0 && 必要数 == 1;
	}
};
class AsteriskWriter : public BaseWriter {
	void 文字を出力する() override
	{
		if (一番上())
			printf("＾");
		else if (行内で初回の出力となる())
			printf("／");
		else if (行内で最後の出力となる())
			printf("＼");
		else 
			printf("＊");
	}
	int 次行の必要数() override
	{
		return 現在の必要数() + 2;
	}
public:
	AsteriskWriter(int 必要数)
		: BaseWriter{ 必要数 }
	{
	}
};
class SpaceWriter : public BaseWriter {
	void 文字を出力する() override
	{
		printf("　");
	}
	int 次行の必要数() override
	{
		return 現在の必要数() - 1;
	}
public:
	SpaceWriter(int 必要数)
		: BaseWriter{ 必要数 }
	{
	}
};

int main()
{
	printf("n?");
	int n;
	if (scanf_s("%d", &n) == 1) {
		if (n > 0) {
			SpaceWriter    空白{n - 1};
			AsteriskWriter 星印{    1};
			for (;;) {
				if (空白.全部出力済み()) {
					if (星印.全部出力済み()) {
						printf("\n");//改行
						if (空白.出力不要()) {
							//本当の終わり
							return 0;
						}
						else {
							星印.次の行の準備();
							空白.次の行の準備();
						}
					}
					else {
						//星印：まだ出し切っていない
						星印.出力する();
					}
				}
				else {
					//まだ出力しきっていない
					空白.出力する();
				}
			}
		}
	}
}
