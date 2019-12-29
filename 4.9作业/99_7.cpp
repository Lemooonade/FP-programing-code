#include<iostream>
void reverse(int* data, int len)
{
	int tmp;
	for (int i = 0; i < len/2; i++)
	{		
		tmp = *(data + i);
		*(data + i) = *(data + len - i -1);
		*(data + len - i - 1) = tmp;
	}
}
int main()
{
	int num[] = { 1,2,3,4,5,6,7,8,9,10};
	reverse(num, 10);
	for (int j = 0; j < 10; j++)
	{
		printf("%d ", num[j]);
	}
}