#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num1, num2;
	scanf_s("%d%d", &num1, &num2);
	if (num1%num2 == 0)
	{
		printf("%d �O %d������\n",num1,num2);
	}
	else
	{
		printf("%d ���O %d������\n",num1,num2);
	}
}