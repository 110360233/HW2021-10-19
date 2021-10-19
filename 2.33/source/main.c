#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float km, gas, far, stop, pass, total,save;
	printf("input how long you drive every day.\n");
	scanf_s("%f", &km);
	printf("input how much money every gallon of gasoline.\n");
	scanf_s("%f", &gas);
	printf("input how long can one gallon of gasoline drive.\n");
	scanf_s("%f", &far);
	printf("input how much parking fee you need to pay everyday.\n");
	scanf_s("%f", &stop);
	printf("input how much tolls you need to pay everyday.\n");
	scanf_s("%f", &pass);
	total = (km / far)*gas + stop + pass;
	printf("you have to spend %f dollar every day from driving your car.\n", total);
	save =  (2*total)/ 3;
	printf("you can save %f dollar every day if you Carpool with two people.\n", save);
	system("pause");
	return 0;
}