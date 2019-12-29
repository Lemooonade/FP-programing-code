#include<iostream>
int del(int* data, int n, int len)
{
	int i = 0;
	for (; i < len; i++)
	{

		if (*(data + i) == n)
		{
			break;
		}
	}
	for (int j = i+1,k=i; j < len-1; j++,k++)
	{
		*(data + k) = *(data + j);
	}
	return len - 1;
}
int main()
{
	int num[] = { 1,2,3,4,5,6,7,8,9,10 };
	int len;
	len = del(num, 2, 10);
	for (int  i = 0; i < len-1; i++)
	{
		printf("%d", num[i]);
	}
}