#include<iostream>
#include<stdlib.h>
#include <time.h>
int main()
{
	int num[1000];
	int max=0;
	srand(time(NULL));
	for (int i = 0; i <= 999; i++)
	{
		num[i] = rand() % 999;
		//printf("%d   ", num[i]); µ÷ÊÔÓÃ
	}
	for (int j = 0; j <=999; j++)
	{
		if (num[j] > max)
		{
			max = num[j];
		}
	}
	printf("\n%d", max);
}