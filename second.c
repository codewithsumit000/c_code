#include<stdio.h>
int main()
{ int roll_no,age;
char name[50],address[50],email[50];
char gender;
printf("enter your roll no \n:");
scanf("%d",&roll_no);
printf("enter your name \n:");
scanf("%s",&name);
printf("enter your age \n:");
scanf("%d",&age);
printf("enter your email \n:");
scanf("%s",&email);
printf("enter your gender \n:");
scanf(" %c",&gender);
printf("enter your address \n:");
scanf("%s",address);
printf("your details are\n");
printf("\nroll no =%d",roll_no);
printf("\nname =%s",name);
printf("\nage =%d",age);
printf("\nemail =%s",email);
printf("\ngender =%c",gender);
printf("\naddress=%s",address);
return 0;

    
}