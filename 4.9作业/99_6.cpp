#include<iostream>
int searchch(char* string, char ch)
{
	int index;
	bool flag = false;
	for (int i = 0; i < strlen(string); i++)
	{
		if (*(string + i) == ch)
		{
			flag = true;
			index = i;
			break;
		}
	}
	if (flag)
	{
		return index;
	}
	else
	{
		return -1;
	}
}
int main()
{
	char str[] = "afoihiosf";
	printf("%d", searchch(str, 'f'));
}