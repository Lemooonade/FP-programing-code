#include<iostream>
int count(char* string)
{
	int num=0;
	for (int  i = 0; ; i++)
	{
		if (*(string+i)=='\0')
		{
			break;
		}
		num++;
	}
	return num;
}
int main()
{
	char str[20] = "aaaaaaaaaaaaa";
	printf("%d", count(str));
}