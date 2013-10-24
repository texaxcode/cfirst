#include<stdio.h>
#include<string.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main ()
{
	int first = 0, second = 0;
	int method = 0;
	int result = 0;

	printf ("which method do you want to use?!\n");
	printf ("1 : add  2 : subrtact 3 : multiply 4 : division\n");
	scanf("%d" , &method);

	if (method < 1 || method > 4){
		return (1);
	}

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
	}

	printf("the result is %d\n" , result);

	return (0);

}
	int add (int m, int n)
	{
		return (m+n);
	}

	int sub (int m, int n)
	{
		return (m-n);
	}

	int mul (int m, int n)
	{
		return (m*n);
	}

	int div (int m, int n)
	{
		return (m/n);
	}
