#include<iostream>
int main()
{
	int n, j = 0;
	int tmp_i;
	scanf("%d", &n);
	while (j < n)
	{
		int num[1000];
		int del_num, del_num_id;
		bool flag = 0;
		scanf("%d", &num[0]);
		for (int i = 1;; i++)
		{
			scanf("%d", &num[i]);
			if (num[i] == 0)
			{
				tmp_i = i - 1;
				break;
			}
		}
		scanf("%d", &del_num);
		for (int z = 0; z <= tmp_i; z++)
		{
			if (del_num == num[z])
			{
				continue;
			}
			else
			{
				printf("%d ", num[z]);
			}
		}
		printf("\n");
		j++;
	}
}