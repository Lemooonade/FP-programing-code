#include<iostream>
void mstrcpy(char* str, char* des, int m)
{
	char* tmp;
	tmp = str;
	str += m;
	for (int i = m; i <= strlen(tmp); i++)
	{
		*des = *str;
		des++, str++;
	}
}
int main()
{
	char str[] = "asahfahsflalsf";
	char des[1024];
	mstrcpy(str, des, 4);
	printf("%s", des);
}