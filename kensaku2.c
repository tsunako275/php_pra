//c:\borland\bcc55\Bin\bcc32

#include <stdio.h>
int main(void)
{
	//探索対象9こ
	int hai[9] = {1, 3, 6, 10, 20, 22, 38, 55, 60};
	int kensaku;
	int low, high, middle;
	
	high = 8;
	low = 0;
	middle = (high + low)/2;

	
	printf("探す文字を入力してください\n");
	scanf("%d", &kensaku);
	
	while(low <= high)
	{
		if(hai[middle] == kensaku){
			printf("%dは%d番目です。\n", kensaku, middle+1);
			break;
		}
		
		if(hai[middle] < kensaku){
			low = middle + 1;
		} else {
			high = middle -1;
		}
		
		middle = (low + high)/2;
		
	}
	
	if(low > high){
		printf("検索した文字はありません\n");
	}
	
	
	
	return 0;
	
}