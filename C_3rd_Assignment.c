#include <stdio.h>

int main()
{
	float x = 1.0, sum = 0.0, a = 0.0;

	do
	{
		a = x*x;
		sum = sum + a;
		printf("x가 %f 일때 넓이의 차이는 %f - %f = %f\n", x, sum, sum - a, a);

		x = x/2;
	}
	while ( a >= 0.000001);

	printf("\n계산한 넓이의 합은 %f 입니다.\n", sum - a);

}