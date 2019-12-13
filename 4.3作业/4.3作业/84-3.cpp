#include<iostream>
int get_len(int x)
{
	int num_lens=0;
	while (x)
	{
		x = x/10;
		num_lens++;
	}
	return num_lens;
}
int get_rever(int y)
{
	int num_rever=0,num_len,num_rate=1,i=0;
	int n[5];
	n[0] = y %10;  //个位数
	n[1] = y % 100/10;  //十位数
	n[2] = y % 1000 / 100; //百位数
	n[3]= y % 10000 / 1000; //千位数
	n[4]= y / 10000; //万位数
	num_len=get_len(y);
	while (num_len > 1)
	{
		num_rate *= 10;
		num_len--;
		//printf("%d\n", num_rate);  调试用
	}
	num_len = get_len(y);
	while (num_len > 0)
	{
		num_rever = num_rever+n[i] * num_rate;
		num_rate = num_rate / 10;
		num_len = num_len - 1;
		i++;
	}
	return num_rever;
}
int main()
{
	int num;
	scanf("%d", &num);
	printf("这是%d位数\n", get_len(num));
	printf("%d", get_rever(num));

}