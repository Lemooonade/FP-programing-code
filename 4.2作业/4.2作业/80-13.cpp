#include<iostream>
int main()
{
	float c, f;
	printf("please input Celsius temperature\n");
	scanf_s("%f", &c);
	f = (9.0 / 5.0) * c + 32.0;
	printf("The fahrenheut temperature is %.2f", f);
	return 0;

}