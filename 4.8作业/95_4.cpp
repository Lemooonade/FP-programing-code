#include<iostream>
double tempt(double temp, char ctype);
int main()
{
	double n;
	char choice;
	scanf("%lf %c", &n,&choice);
	printf("%lf", tempt(n, choice));
}
double tempt(double temp, char ctype)
{
	if (ctype == 'C')
	{
		temp = (temp - 32) / 1.8;
		return temp;
	}
	else if(ctype=='F')
	{
		temp = temp * 1.8 + 32;
		return temp;
	}
}