#include<stdio.h>
#include<string.h>
#define N 1024
int main()
{
    char string[N], newstring[N];
    gets(string);
    int len = strlen(string), j = 0;
    for (int i = 0; i < len; i++)
    {
        if (string[i] != ' ')
        {
            newstring[j++] = string[i];
        }
    }
    newstring[j] = '\0';
    puts(newstring);
    return 0;
}