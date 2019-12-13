#include<stdio.h>
#define M 10       // 行数
int main(void)
{
	int a[M][M], i, j;   // 二维数组和循环变量，a[行][列]
	for (i = 0; i < M; i++) // 每一行
	{
		for (j = 0; j <= i; j++) // 赋值打印
		{
			if ((i == j || j == 0))
			{
				a[i][j] = 1;
			}
			else
			{
				a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
			}
			printf("%-4d", a[i][j]);
		}
		printf("\n");
	}
}