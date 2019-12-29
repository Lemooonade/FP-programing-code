#include<iostream>
char * change(char* string)
{
	char* str = string;
	for (int i = 0; i < strlen(str); i++)
	{
		if (*string >= 'a' && *string <= 'z')
		{
			*string = *string - 32;
		}
		string++;
	}
	return str;
}
int main()
{
	char str[1025]="asdgkagdkasg";
	printf("%s", change(str));
}