#include<iostream>
int main()
{
	int num[20],num_id[20];
	int tmp,tmp_id=0;
	for (int i = 0; i < 20; i++)
	{
		num_id[i] = i;
	}
	for (int z = 0; z < 20; z++)
	{
		scanf("%d", &num[z]);
	}
	for (int j = 0; j < 19; j++)
	{
		for (int i = 0; i < 19; i++)
		{
			if (num[i+1] < num[i])
			{
				tmp = num[i];
				tmp_id = num_id[i+1];
				num_id[i + 1] = num_id[i];
				num_id[i] = tmp_id;
				num[i] = num[i + 1];
				num[i + 1] = tmp;
			}
		}
	}
	for (int k = 0; k <= 19; k++)
	{
		printf("%d\t %d\n", num[k],num_id[k]);
	}
}