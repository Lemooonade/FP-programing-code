#include<iostream>
int main()
{
	int n,j=0;
	int tmp_i;
	scanf("%d", &n);
	while (j <n)
	{
		int num[1000];
		scanf("%d", &num[0]);
		for (int i = 1;; i++)
		{
			scanf("%d", &num[i]);
			if (num[i]==0)
			{
				tmp_i = i-1;
				break;
			}
		}
		for (int z = tmp_i; z >=0; z--)
		{
			printf("%d ", num[z]);
		}
		printf("\n");
		j++;
	}
}