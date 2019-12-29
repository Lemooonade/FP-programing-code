#include<iostream>
void delch(char* string,char ch)
{
	int i = 0;
	for (; i < strlen(string); i++)
	{

		if (*(string + i) == ch)
		{
			break;
		}
	}
	//printf("%d", i);
	for (int j = i + 1, k = i; j < strlen(string); j++, k++)
	{
		*(string + k) = *(string + j);
	}
	*(string + (strlen(string) - 1)) = '\0';
}
int main()
{
	char str[] = "audh";
	delch(str, 'a');
	printf("%s", str);
}