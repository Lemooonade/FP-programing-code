#include<iostream>
#include<math.h>
int main()
{
	int n,n1,n2,n3,n4;
	scanf_s("%d", &n);
	n = pow(n, 2);
	n1 = n/1000;
	n2 = (n / 100)%10;
	n3 = (n / 10)%10;
	n4 = (n % 10);
	printf("%d", (n3*10+n4));
	return 0;
}