#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num1, num2;
	scanf_s("%d%d", &num1, &num2);
	if (num1%num2 == 0)
	{
		printf("%d 是 %d的倍數\n",num1,num2);
	}
	else
	{
		printf("%d 不是 %d的倍數\n",num1,num2);
	}
}