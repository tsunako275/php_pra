//c:\borland\bcc55\Bin\bcc32

#include <stdio.h>
int main(void)
{
	//探索対象7こ
	int hai[7] = {3, 8, 10, 5, 20, 1, 6};
	int tmp, i, j;
	int min;

	for(i = 0; i < 7; i++){
		min = i;
				
		for(j = i + 1; j <= 7; j++){
			if(hai[min] > hai[j]){
				min = j;
			}
		}
		
		tmp = hai[i];
		hai[i] = hai[min];
		hai[min] = tmp;
	}
	
	for(i=0; i<7; i++){
		printf("%d \n", hai[i]);
	}
	
	
	
	return 0;
	
}