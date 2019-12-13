#include<iostream>
int main()
{
	char ch[1024];
	int len, i,max;
	gets_s(ch);
	for (i = 0;; i++)
	{
		if (ch[i] == '\0')
		{
			break;
		}
	}
	len = i;
	max = ch[0];
	for (int j = 1; j < len; j++)
	{
		if (ch[j]>max)
		{
			max = ch[j];
		}
	}
	printf("max=%c\n", max);

}