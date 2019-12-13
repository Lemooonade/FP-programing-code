#include <iostream>
//#define x 3
//#define a 5
//using namespace std;

int main()
{
	int num1, num2, num3, sum;
	float avg;
	scanf_s("%d%d%d", &num1, &num2, &num3);
	sum = num1 + num2 + num3;
	avg = sum / 3.0;
	printf("The avg is %.2f\n", avg);
	printf("The sum is %d", sum);
	return 0;


}