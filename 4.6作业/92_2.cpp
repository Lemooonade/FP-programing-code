#include<iostream>
int main()
{
	char article[3][181];
	int num_space = 0, num_upper = 0, num_lowwer = 0, num_num = 0, num_other = 0;
	for (int i = 0; i <=2; i++)
	{
		gets_s(article[i]);
	}
	article[0][80] = '\0';
	article[1][80] = '\0';
	article[2][80] = '\0';
	//puts(article[1]);     //µ÷ÊÔÓÃ
	for (int j = 0; j <=2; j++)
	{
		for (int z = 0; z < 80; z++)
		{
			if (article[j][z] == ' ')
			{
				num_space++;
				continue;
			}
			else if (article[j][z] >= 'A' && article[j][z] <= 'Z')
			{
				num_upper++;
				continue;
			}
			else if (article[j][z] >= 'a' && article[j][z] <= 'z')
			{
				num_lowwer++;
				continue;
			}
			else if (article[j][z] >= '0' && article[j][z] <= '9')
			{
				num_num++;
				continue;
			}
			else
			{
				num_other++;
				continue;
			}
		}
	}
	printf("´óÐ´×ÖÄ¸ %d\nÐ¡Ð´×ÖÄ¸ %d\nÊý×Ö×Ö·û %d\n¿Õ¸ñ %d\nÆäËû×Ö·û %d\n", num_upper, num_lowwer, num_num, num_space, num_other);
	return 0;
}