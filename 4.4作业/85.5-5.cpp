#include<iostream>
#include<iostream>
int main()
{
	float pi_2 = 1;
	for (int i = 1; i <= 100; i++)
	{
		pi_2 = pi_2 * pow(2 * i, 2)/((2*i-1)*(2*i+1));
	}
	printf("piΪ%f", 2 * pi_2);
	return 0;
}