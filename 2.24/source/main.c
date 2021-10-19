#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num;
	printf("input a number ");
	scanf_s("%d", &num);
	num = num % 2;
	if (num == 0)
		printf("number is even number\n");
	if(num != 0)
		printf("number is odd number\n");
	return 0;
}