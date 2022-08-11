#include <stdio.h>
#include <string.h>

int main(){
	
	for(int i = 0;i < 10;++i)
	{
		for(int j = 0;j <= i;++j)
			printf("*");
		printf("\n");
	}
	printf("时间会告诉我一切");
	return 0;
}
