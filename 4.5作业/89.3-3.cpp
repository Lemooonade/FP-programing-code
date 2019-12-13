#include<iostream>
#include <time.h>
int main()
{
	int n1[1000], n2[1000];
	srand(time(NULL));
	for (int i = 0; i < 1000; i++)
	{
		n1[i] = rand() % 999;
		printf("%d ", n1[i]);
	}
	printf("\n");
	for (int j = 999, z=0; j >= 0; j--,z++)
	{
		n2[z] = n1[j];
	}
	for (int i = 0; i < 1000; i++)
	{
		printf("%d ", n2[i]);
	}
}