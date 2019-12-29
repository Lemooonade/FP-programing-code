#include<iostream>
int stringlen(char* string)
{
	return strlen(string);
}
int main()
{
	char str[] = "fjscjsklfh";
	printf("%d", stringlen(str));
}