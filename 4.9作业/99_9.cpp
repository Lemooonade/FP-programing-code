#include<iostream>
#include<math.h>
void swap(int* data, int len)
{
	int max = *data, min = *data;
	int max_i=0, min_i=0, tmp;
	for (int i = 1; i < len; i++)
	{
		if (*(data+i)>max)
		{
			max = *(data + i);
			max_i = i;
		}
		if (*(data + i) < max)
		{
			min = *(data + i);
			min_i = i;
		}
	}
	tmp = *data;
	*data = min;
	*(data + min_i) = tmp;
	tmp = *(data+len-1);
	*(data + len - 1) = max;
	*(data + max_i) = tmp;
}
int main()
{
	int num[] = { 4,5,7,2,3,4,2 };
	swap(num, 7);
	for (int i = 0; i < 7; i++)
	{
		printf("%d ", num[i]);
	}
}