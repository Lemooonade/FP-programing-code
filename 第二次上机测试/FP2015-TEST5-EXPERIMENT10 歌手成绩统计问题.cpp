#include<iostream>
int main()
{
	int n, score[10],max=0,min=0;
	float avg = 0;
	bool flag1 = 0,flag2=0;
	scanf("%d", &n);
	while (n>0)
	{
		for (int i = 0; i < 10; i++)
		{
			scanf("%d", &score[i]);
		}
		max = score[0], min = score[0];
		for (int j = 1; j < 10; j++)
		{
			if (max<score[j])
			{
				max = score[j];
			}
			if (min>score[j])
			{
				min = score[j];
			}
		}
		for (int z = 0; z < 10; z++)
		{
			if (score[z] == min&&flag1==0)
			{
				flag1 = 1;
				continue;
			}
			if (score[z] == max&&flag2==0)
			{
				flag2 = 1;
				continue;
			}
			avg += score[z];
		}
		printf("%.1f\n", avg / 8);
		avg = 0;
		flag1 = 0, flag2 = 0;
		n--;
	}
}