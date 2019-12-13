#include<iostream>
int main()
{
	float score;
	scanf("%f", &score);
	if (score >= 90)
		printf("A");
	else if (score >= 80 && score <= 89)
		printf("B");
	else if (score >= 70 && score <= 79)
		printf("C");
	else if (score >= 60 && score <= 69)
		printf("D");
	else if (score < 60)
		printf("E");
	return 0;
}