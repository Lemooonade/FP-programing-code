#include<iostream>
void maxmin(int* data,int* max, int* min, int len)
{
	*max = *data, * min = *data;
	for (int i = 1; i < len; i++)
	{
		if (*(data+i) > * max)
		{
			*max = *(data + i);
		}
		if (*(data + i) < * max)
		{
			*min = *(data + i);
		}
	}
}
int main()
{
	int * max=(int*)malloc(sizeof(int)), * min=(int*)malloc(sizeof(int));
	int data[] = { 1,2,3,4,5,6,7,8,9 };
	maxmin(data, max, min, 9);
	printf("%d\n%d", *max, *min);
}