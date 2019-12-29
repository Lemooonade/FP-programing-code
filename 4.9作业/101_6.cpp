#include<iostream>
void dresort(int* data, int len)
{
	int tmp;
	for (int i = 0; i < len/2; i++)
	{
		if ((i + 1) % 2 == 0)
		{
			tmp = *(data  + i);
			*(data + i) = *(data -1 - i + len);
			*(data -1 - i + len) = tmp;
		}
	}
}
int main()
{
	int data[] = { 1,2,3,4 };
	dresort(data, 4);
}