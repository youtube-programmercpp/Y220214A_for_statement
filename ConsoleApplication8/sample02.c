#include <stdio.h>
int main()
{
	printf("n?");
	int n;
	if (scanf_s("%d", &n) == 1) {
		if (n > 0) {
			int 星印の必要数 = 1;
			int 空白の必要数 = n - 1;
			int 出力済みの星印の数 = 0;
			int 出力済みの空白の数 = 0;
			for (;;) {
				if (出力済みの空白の数 == 空白の必要数) {
					//空白：全部出力済み

					if (出力済みの星印の数 == 星印の必要数) {
						//星印：全部出力済み
						printf("\n");//改行

						if (空白の必要数 == 0) {
							//本当の終わり
							return 0;
						}
						else {
							//
							//次の行の準備
							//
							星印の必要数 += 2;//１行で２個増える
							--空白の必要数;//１行で１個減る
							出力済みの星印の数 = 出力済みの空白の数 = 0;//リセット
						}
					}
					else {
						//星印：まだ出し切っていない
						printf("＊");//全角星印
						++出力済みの星印の数;
					}
				}
				else {
					//まだ出力しきっていない
					printf("　");//全角スペース
					++出力済みの空白の数;
				}
			}
		}
	}

}
