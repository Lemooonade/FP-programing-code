#include<iostream>
//ĞĞÖ¸Õë
/*
int FindMax(int(*data)[4])
{
	int max = **data;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (max<*(*(data+i)+j))
			{
				max = *(*(data + i) + j);
			}
		}
	}
	return max;
}
*/
int FindMax(int* data)
{
	int max = *data;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (max < *(data+i*4+j))
			{
				max = *(data + i * 4 + j);
			}
		}
	}
	return max;
}
int main()
{
	int max;
	int data[3][4] = { {12,31,21,123},{124,124,123,412},{124,124,346,3414} };
	max = FindMax(&data[0][0]);
	printf("%d", max);
}