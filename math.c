#include<stdio.h>
#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
int add(int a, int b)
{

	return a + b;
}

EMSCRIPTEN_KEEPALIVE
int substract(int a, int b)
{

	return a - b;
}

EMSCRIPTEN_KEEPALIVE
int multiply(int a, int b)
{

	return a * b;
}

EMSCRIPTEN_KEEPALIVE
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
