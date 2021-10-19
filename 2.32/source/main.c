#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float high, weight, BMI;
	printf("please input your high(m) & weight and I will tell you your BMI\n");
	scanf_s("%f%f",&high,&weight);
	if (high > 5)
	{
		printf("please input high(M)\n");
	}
	else
	{
		BMI = weight / (high*high);
		printf("your BMI is %f", BMI);
	}
	printf("BMI Values\n");
	printf("Underweight: less than 18.5\n");
	printf("Normal:      between 18.5 and 24.9\n");
	printf("Overweight:  between 25 and 29.9\n");
	printf("Obese:       30 or greater\n");
	system("pause");
	return 0;
}