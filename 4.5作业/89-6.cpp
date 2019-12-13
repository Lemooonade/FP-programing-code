#include<iostream>
#include<time.h>
int main()
{
	bool n = 1;
	int num[20];
	int sum = 0;
	srand(time(NULL));
	for (int i = 0; i < 20; i++)
	{
		num[i] = rand() % 999;
		//printf("%d\n", num[i]);
	}
	for (int i = 1; i < 20; i++)
	{
		sum += num[i];
	}
	printf("%d",sum / 20);
}