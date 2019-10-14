#include <stdio.h>

int main(void)
{
	int x = 21;
	int y = 16;
	int j = 1;
	int i = 0;
	for(j = 1;j < 10;j++)
	{
		if(x%j==0 && y%j==0)
		{
			i++;	
		}
	}
	if(i == 1)
	{
		printf("»¥ÖÊ");	
	}
	else
	{
		printf("²»»¥ÖÊ");	
	}

	return 0;
}
