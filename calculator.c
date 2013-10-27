#include<stdio.h>

double add(double m, double n);
double sub(double m, double n);
double mul(double m, double n);
double div(double m, double n);

int main ()
{
	double first = 0, second = 0;
	int method = 0;
	double result = 0;

	printf ("\n INSTRUCTION\n\n");
	printf (" First, choose the method\n Second, choose the first and second number\n Third..... Enjoy the result :) \n\n");
	printf ("which method do you want to use?!\n");
	printf ("1 : add  2 : subrtact 3 : multiply 4 : division\n");
	scanf("%d" , &method);

	while (method < 1 || method > 4){
		printf ("attention pleas: number < 5 or number > 1\n");
		printf ("1 : add  2 : subrtact 3 : multiply 4 : division\n");
		scanf("%d" , method);		
	};

	printf("type the first number!");
	scanf("%d" , &first);

	printf("type the second number!");
	scanf("%d" , &second);

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

	printf("the result is %d\n" , result);

	return (0);

}
	double add (double m, double n)
	{
		return (m+n);
	}

	double sub (double m, double n)
	{
		return (m-n);
	}

	double mul (double m, double n)
	{
		return (m*n);
	}

	double div (double m, double n)
	{
		return (m/n);
	}
