#include<iostream>
#include<stdlib.h>
#include <time.h>
int main()
{
	float num[1000];
	float max = 0;
	int num_x;
	srand(time(NULL));
	for (int i = 0; i <= 999; i++)
	{
		num[i] = rand() % 999;
		//printf("%f   ", num[i]); //µ÷ÊÔÓÃ
	}
	for (int j = 0; j <= 999; j++)
	{
		if (num[j] > max)
		{
			max =num[j];
			num_x = j;
		}
	}
	printf("\n%d", num_x);
}