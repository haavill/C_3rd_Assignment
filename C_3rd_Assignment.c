#include <stdio.h>

int main()
{
	float x = 1.0, sum = 0.0, a = 0.0;

	do
	{
		a = x*x;
		sum = sum + a;
		printf("x�� %f �϶� ������ ���̴� %f - %f = %f\n", x, sum, sum - a, a);

		x = x/2;
	}
	while ( a >= 0.000001);

	printf("\n����� ������ ���� %f �Դϴ�.\n", sum - a);

}