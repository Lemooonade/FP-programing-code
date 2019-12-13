#include<iostream>
int main()
{
	int score[5][3];
	int sum[5];
	float avg[5];
	int low_score = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &score[i][j]);
		}
	}
	for (int i = 0; i < 5; i++)
	{
		sum[i] = 0;
		avg[i] = 0; //数值初始化
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sum[i] += score[i][j];
		}
		avg[i] = sum[i] / 3;
		if (avg[i]<60)
		{
			low_score++;
		}
	}
	for (int i = 0; i < 5; i++)
	{
		printf("学生%d的平均成绩是%.2f总成绩是%d\n",i,avg[i],sum[i]);
	}
	printf("没有及格的人数为%d", low_score);
	return 0;
}