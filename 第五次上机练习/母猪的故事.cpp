#include<iostream>
using namespace std;
int main()
{
    int choice, n;
    int num[60];
    scanf("%d", &choice);
    num[1] = 1;
    num[2] = 2;
    for (int i = 3; i <= 50; ++i)
    {
        num[i] = num[i - 2] + num[i - 1];
    }
    while (choice>0)
    {
        cin >> n;
        cout << num[n] << endl;
        choice--;
    }
}