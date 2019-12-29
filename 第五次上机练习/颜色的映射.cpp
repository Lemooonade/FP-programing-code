#include<iostream>
#include<math.h>
struct RGB
{
	int r;
	int g;
	int b;
};
int main()
{
	int rgb_i = 16;
	RGB color[100];
	float d, rgb_same_percent[16][50];
	int min = 65535,min_id=0;
	for (int i = 0; i < 16; i++)
	{
		scanf("%d%d%d", &color[i].r, &color[i].g, &color[i].b);
	}
	while (true)
	{
		scanf("%d%d%d", &color[rgb_i].r, &color[rgb_i].g, &color[rgb_i].b);
		if ((color[rgb_i].r == -1 && color[rgb_i].g == -1 && color[rgb_i].b == -1))
		{
			break;
		}
		rgb_i++;
	}
	for (int j = 16; j < rgb_i; j++)
	{
		for (int k = 0; k < 16; k++)
		{
			d = sqrt(pow(color[j].r - color[k].r, 2) + pow(color[j].g - color[k].g, 2) + pow(color[j].b - color[k].b, 2));
			rgb_same_percent[j - 16][k] = d;
		}
	}
	for (int z = 0; z < rgb_i-16; z++)
	{
		for (int m = 0; m < 16; m++)
		{
			if (rgb_same_percent[z][m]<min)
			{
				min = rgb_same_percent[z][m];
				min_id = m;
			}
		}
		printf("(%d,%d,%d)", color[z+16].r, color[z+16].g, color[z+16].b);
		printf(" maps to ");
		printf("(%d,%d,%d)\n", color[min_id].r, color[min_id].g, color[min_id].b);
		min = 65535;
	}
}
