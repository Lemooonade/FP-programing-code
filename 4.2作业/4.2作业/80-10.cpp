#include<iostream>
int main()
{
	char ascii;
	scanf_s("%c", &ascii);
	ascii = ascii + 32;
	printf("%c", ascii);
	return 0;

}