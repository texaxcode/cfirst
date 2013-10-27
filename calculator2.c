#include<stdio.h>

int add (int a, int b);
int sub (int a, int b);
int mul (int a, int b);
int div (int a, int b);

int (*oper[4]) (int a, int b) = {add, sub, mul, div};

int get_method();

int main ()
{

	int a;
	int b;
	int i;
	int result;
	char answer;

	i = get_method();

	do{
	printf("first number:\n");
	scanf("%d" , &a);

	printf("second number:\n");
	scanf("%d" , &b);

	if (b == 0) {
		return (1);
	}
	result = oper[i-1] (a, b);
	printf("RESULT: %d\n" , result);

	printf ("Do you want to continue(y/n)?!\n");
	answer = getchar();
	answer = getchar();

	if (answer == 'y' || answer == 'Y')
	{
		i = get_method();
	}

	} while (answer == 'y' || answer == 'Y');

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

int get_method ()
{
	int i;
	printf("which metheod do you like to use!\n");
	scanf("%d" , &i);

	while (i < 1 || i >4) {
		printf ("WRONG NUMBER!\n");
		printf ("****** 0 < input number < 5 ******\n");
		scanf("%d", &i);
	}

	return (i);
}
