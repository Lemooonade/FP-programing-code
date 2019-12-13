#include<iostream>
int main()
{
	int price;
	float fee;
	scanf("%d", &price);
	if (price>=10000)
	{
		fee = price * 0.05;
	}
	else if (price>5000&&price<10000)
	{
		fee = price * 0.03;
	}
	else if (price>1000&&price<=5000)
	{
		fee = price * 0.02;
	}
	else if (price <= 1000)
	{
		fee = 0.0;
	}
	printf("%.2f", fee);
}