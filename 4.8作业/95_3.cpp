#include<iostream>
#include<math.h>
double distance(int x1, int y1, int x2, int y2);
int main()
{
	int x1,x2,y1,y2;
	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
	printf("%.2lf",distance(x1, y1, x2, y2));
}
double distance(int x1, int y1, int x2, int y2)
{
	return sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
}