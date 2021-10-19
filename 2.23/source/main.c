#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num1, num2, num3;
	scanf_s("%d%d%d", &num1, &num2, &num3);
	if (num1 > num2)
	{
		if (num1 > num3)
		{
			if (num2 > num3)
			{
				printf("MAX number is %d\nmin number is %d", num1, num3);
			}
			else
			{
				printf("MAX number is %d\nmin number is %d", num1, num2);
			}
		}
		else if (num1 < num3)
		{
			printf("MAX number is %d\nmin number is %d", num3, num2);
		}
		else
		{
			printf("You can not input equal number\n");
		}
	}
	else
	{
		if (num2 > num3)
		{
			if (num1 > num3)
			{
				printf("MAX number is %d\nmin number is %d", num2, num3);
			}
			else
			{
				printf("MAX number is %d\nmin number is %d", num2, num1);
			}
		}
		else if (num2 < num3)
		{
			printf("MAX number is %d\nmin number is %d", num3, num1);
		}
		else
		{
			printf("You can not input equal number\n");
		}
	}
	system("pause");
	return 0;
}