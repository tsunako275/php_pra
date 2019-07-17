//c:\borland\bcc55\Bin\bcc32

#include <stdio.h>
int main(void)
{
	int hai[7] = {3, 8, 10, 5, 20, 1, 6};
	int kensaku, i;
	
	printf("探す文字を入力してください\n");
	scanf("%d", &kensaku);
	
	for(i = 0; i<7; i++)
	{
		if(hai[i] == kensaku)
		{
			printf("%dは%d番目です。\n", kensaku, i+1);
			break;
		}
	}
	
	if(i>=7){
		printf("検索した文字はありません\n");
	}
	
	
	
	return 0;
	
}