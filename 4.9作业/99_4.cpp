#include<iostream>
int search(int* data, int n, int len)
{
	int index;
	bool flag = false;
	for (int i=0; i < len; i++)
	{
		if (*(data + i) == n)
		{
			flag = true;
			index = i;
			break;
		}
	}
	if (flag)
	{
		return index+1;
	}
	else
	{
		return -1;
	}
}
int main()
{
	int num[] = { 1,2,3,4,5,6,7,8,9,10 };
	int len;
	len = search(num, 2, 10);
	printf("%d", len);
}