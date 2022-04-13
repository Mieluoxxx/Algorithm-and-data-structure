#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int row, col; // 行 列 
	char ch;
	scanf("%d %c", &col,&ch);
	if(col % 2 == 1)
	{
		row = col / 2 + 1;
	}
	else
	{
		row = col / 2;
	}
	//第一行 
	for(int i=0; i<col; ++i)
	{
		printf("%c",ch);
	}
	printf("\n");
	//第二行到倒数第二行 
	for(int i=2; i<row; ++i)
	{
		printf("%c",ch);
		for(int j=0; j<col-2;++j)
		{
			printf(" ");
		}
		printf("%c\n",ch);
	}
	//最后一行 
	for(int i=0; i<col; ++i)
	{
		printf("%c",ch);
	}	
	return 0;
}