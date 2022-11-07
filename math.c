#include<stdio.h>

int add(int a, int b)
{

	return a + b;
}

int substract(int a, int b)
{

	return a - b;
}

int multiply(int a, int b)
{

	return a * b;
}

float divide(int a, int b)
{

	return a / b;
}

int main()
{
	printf("100 + 10 = %d\n", add(100, 10));
	printf("100 - 10 = %d\n", substract(100, 10));
	printf("100 * 10 = %d\n", multiply(100, 10));
	printf("100 / 10 = %f\n", divide(100, 10));

	return 1;
}
