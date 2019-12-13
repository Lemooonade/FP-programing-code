#include<iostream>
#include<stdlib.h>
#include <time.h>
int main()
{
	int x1[1000],x2[1000],sum[1000];
	int z = 0;
	srand(time(NULL));
	for (int i = 0; i <= 999; i++)
	{
		x1[i] = rand() % 999;
		printf("1:%d\n", x1[i]);
		x2[i] = rand() % 999;
		printf("2:%d\n", x2[i]);
		//printf("%d   ", num[i]); µ÷ÊÔÓÃ
	}
	for (int j = 0; j <=999; j++)
	{
		sum[j] = x1[j] + x2[j];
	}
	for (int c = 0; c <=999; c++)
	{
		printf("%d\n", sum[c]);
	}
}