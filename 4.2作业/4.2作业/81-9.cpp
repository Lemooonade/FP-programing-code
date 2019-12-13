#include<iostream>
#include<math.h>
#define R1 10
#define R2 10
#define R3 200
#define R4 200
#define U 220
int main()
{
	float i1, i2, i3, i4, r;
	r = (R1 * R2 * R3 * R4) / (R1 + R2 + R3 + R4);
	i1 = U / R1;
	i2 = U / R2;
	i3 = U / R3;
	i4 = U / R4;
	printf("R=%fk\ni1=%fma\ni2=%fma\ni3=%fma\ni4=%fma\n", r, i1, i2, i3, i4);
	return 0;
}