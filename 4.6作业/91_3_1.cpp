#include<iostream>
int main()
{
	char ch[1024];
	char num_ch[27];
	int	num_id[27];
	int num,tmp[2];
	scanf("%s", ch);
	for (int  i = 0; i <26; i++)
	{
		num_ch[i] = i + 'a';
		num_id[i] = 0;
	}
	num_ch[26] = '\0';
	num_id[26] ='\0';
	for (int i = 0; i < strlen(ch); i++)
	{
		if (ch[i]>='a'&&ch[i]<='z')
		{
			num = ch[i] - 'a';
			num_id[num] = num_id[num] + 1;
		}
	}
	for (int j = 0; j < 25; j++)
	{
		for (int i = 0; i <25-j; i++)
		{
			
			if (num_id[i+ 1] >num_id[i])
			{
				tmp[1] = num_ch[i + 1];
				num_ch[i + 1] = num_ch[i];
				num_ch[i] = tmp[1];
				tmp[0] = num_id[i + 1];
				num_id[i + 1] = num_id[i];
				num_id[i] = tmp[0];
				}
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (num_id[i]!=0)
		{
			printf("%c\t", num_ch[i]);
			printf("%d", num_id[i]);
			printf("\n");
		}
	}
}