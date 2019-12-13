#include<iostream>
int main()
{
	float n1, n2, n3;
	printf("input n1\n");
	scanf_s("%f", &n1);
	printf("input n2\n");
	scanf_s("%f", &n2);
	n3 = n1;
	n1 = n2;
	n2 = n3;
	printf("The n1 = %f\nThe n2 = %f", n1, n2);
	return 0;
}