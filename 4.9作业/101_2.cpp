#include<iostream>
void merge(int a[], int n, int b[], int m, int* c)
{
	int i, j;
	for (i = j = 0; i < n && j < m;)
	{
		*c++ = a[i] < b[j] ? a[i++] : b[j++];
	}
	while (i < n)
	{
		*c++ = a[i++];
	}
	while (j < m)
	{
		*c++ = b[j++];
	}
}
int main()
{
	int a[5] = { 1,2,3,4,5 }, b[5] = {4,5,6,7,8}, c[10];
	merge(a, 5, b, 5, c);
	for (int i = 0; i < 10; i++)
	{
		printf("%d  ", c[i]);
	}
	return 0;
}