//WAP to print the sum of two number given by user
#include<stdio.h>
int main()
{
    double first_Number,second_Number,sum;
    printf("enter the two number you want \n:");
    scanf("%lf%lf",&first_Number,&second_Number);
    sum=first_Number+second_Number;
    printf("sum=%lf",sum);
        return 0;
}
