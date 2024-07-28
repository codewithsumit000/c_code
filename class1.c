#include<stdio.h>

int main()
{
double firstNumber,secondNumber,sum,difference,multiply,division;
int option;
char input;

do{

printf("Menu");
printf("\n");
printf("1. Addition");
printf("\n");
printf("2. Subtraction");
printf("\n");
printf("3. Multiplication");
printf("\n");
printf("4. Division");
printf("\n");


printf("Enter first number");
printf("\n");
scanf("%lf",&firstNumber);
printf("\n");
printf("Enter second number");
printf("\n");
scanf("%lf",&secondNumber);
printf("\n");
printf("Which operation did you want to operate ?");
printf("\n");
printf("Choose an option from Menu");
scanf("%d",&option);
printf("\n");

switch(option)
{
case 1:
printf("\n");
sum = firstNumber + secondNumber;
printf("Addition = %lf",sum);
printf("\n");
break;
case 2:
printf("\n");
difference = firstNumber - secondNumber;
printf("Subtraction = %lf",difference);
printf("\n");
break;
case 3:
printf("\n");
multiply = firstNumber * secondNumber;
printf("Multiplication = %lf",multiply);
printf("\n");
break;
case 4:
printf("\n");
division = firstNumber / secondNumber;
printf("Division = %lf",division);
printf("\n");
break;
default:
printf("\n");
printf("Option not available");
}

printf("\n");
printf("Do you want to continue ??");
printf("\n");
printf("Press y for continue and any other key for exit...");
printf("\n");
scanf(" %c",&input);

}while(input == 'y' || input == 'Y');
return 0;
}
