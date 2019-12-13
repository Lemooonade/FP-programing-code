#include<iostream>
int main()
{
	char ch1[100];
	gets_s(ch1);
	for (int i = 0; i < strlen(ch1); i++)
	{
		if (ch1[i]!=',')
		{
			printf("%c", ch1[i]);
		}
		else
		{
			printf("\n");
		}
	}
}