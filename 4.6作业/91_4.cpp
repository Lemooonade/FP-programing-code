#include<iostream>
int main()
{
	char ch[1024];
	int len, i, max,tmp;
	gets_s(ch);
	for (i = 0;; i++)
	{
		if (ch[i] == '\0')
		{
			break;
		}
	}
	len = i;
	for (int k = 0; k < len; k++)
	{
		for (int j = 0; j < len; j++)
		{
			if (ch[j] >ch[j+1] )
			{
				tmp = ch[j+1];
				ch[j + 1] = ch[j];
				ch[j] = tmp;
			}
		}
	}
	for (int z = 1; z <= len; z++)
	{
		printf("%c", ch[z]);
	}
}