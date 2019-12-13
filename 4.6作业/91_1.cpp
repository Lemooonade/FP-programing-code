#include<iostream>
int main()
{
	char ch[1024];
	int len,i,max=0,min=0;
	gets_s(ch);
	for (i = 0;; i++)
	{
		if (ch[i] == '\0')
		{
			break;
		}
	}
	len = i;
	for (int j = 0; j < len; j++)
	{
		if (ch[j]>='A'&&ch[j]<='Z')
		{
			max++;
		}
		else if (ch[j] >= 'a' && ch[j] <= 'z')
		{
			min++;
		}
	}
	printf("upper=%d\nlower=%d", max, min);

}