#include<stdio.h>

float add(float m, float n);
float sub(float m, float n);
float mul(float m, float n);
float div(float m, float n);

int main ()
{
	float first, second ;
	int method = 0;
	float result = 0;

	printf ("\n INSTRUCTION\n\n");
	printf (" First, choose the method\n Second, choose the first and second number\n Third..... Enjoy the result :) \n\n");
	printf ("which method do you want to use?!\n");
	printf ("1 : add  2 : subrtact 3 : multiply 4 : division\n");
	scanf("%d" , &method);

	while (method < 1 || method > 4){
		printf ("attention pleas: number < 5 or number > 1\n");
		printf ("1 : add  2 : subrtact 3 : multiply 4 : division\n");
		scanf("%d" , &method);		
	};

	printf("type the first number!");
	scanf("%f" , &first);

	printf("type the second number!");
	scanf("%f" , &second);

	if (second == 0){
		return (1);
	}

	switch (method)
	{
		case 1 : result = add(first, second);
			break;
		case 2 : result = sub(first, second);
			break;
		case 3 : result = mul(first, second);
			break;
		case 4 : result = div(first, second);
			break;
		default:
			return (1);
	}

	printf("the result is %f\n" , result);

	return (0);

}
	float add (float m, float n)
	{
		return (m+n);
}

	float sub (float m, float n)
	{
		return (m-n);
	}

	float mul (float m, float n)
	{
		return (m*n);
	}

	float div (float m, float n)
	{
		return (m/n);
	}
