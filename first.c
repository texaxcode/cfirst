#include<stdio.h>

float sum (float a, float b);

int main ()
{
	int m = 100;
	int *b;

	float f = 2.22;

	float result;

	float x , y;

	b = &m;
	scanf("%f" , &x);
	scanf("%f" , &y);

	printf("I am here....!!\n");

	result = sum  (x ,y);
	printf("f is : %f\n" , result);

	printf("b is : %d\n" , *b );

	return (0);

}

float sum (float a, float b)
{
	return (a +b);

}
