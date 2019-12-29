#include<iostream>
#define N 100
void init(int a[], int n)
{
	srand(123);
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 100;
	}
}
void display(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d  ", a[i]);
	}
}
int main()
{
	int a[N];
	int n;
	scanf("%d", &n);
	init(a, n);
	display(a, n);
}