#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d",&n);
	int i,j,lsum,rsum;
	for (i = 0; i < 10000; i++)
	{
		lsum = 0;
		rsum = 0;
		for (j = 0; j <= n; j++)
			lsum += ( i + j ) * ( i + j );
		for (j = n + 1; j <= 2 * n; j++)
			rsum += ( i + j ) * ( i + j );
		if (lsum == rsum)
		{
			for (j = 0; j < 2 * n + 1; j++)
				printf("%d ", i + j);
			printf("\n");
		}
	}
	return 0;
}
