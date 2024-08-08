#include<stdio.h>
int main()
{ double pincode,amount,cash;
 int id,option,hello;
 char fastcash,withdraw,deposite,amount_details;
 
 printf("wellcome to sumit bank limited \n");
 printf("enter your bank id :\n");
 scanf("%d",&id);
 printf("enter your pincode :\n");
 scanf("%lf",&pincode);
 if(pincode==0000){
  printf("menu \n");
   printf(" 1.fastcash \n");
   printf("2.withdraw\n");
   printf("3.deposite\n");
   printf("4.amount details \n");
   printf("choose an option from menu");
   scanf("%d",&option);
   switch (option)
   {
   case 1:
   printf("1000\n");
   printf("3000\n");
   printf("4000\n");
   printf("5000\n");
    
    break;
   case 2:
   printf("10000\n");
   printf("15000\n");
   printf("300000\n");
   printf("enter amount from above \n");
   
  scanf("%lf",&cash);
  {
  if (cash==10000){
    printf("the amount rs  you have enter is being processing for with draw\n");
  }
  else if (cash==15000)
  {
    printf("the amount you have enter is being processing for with draw \n");
  }
  else if (cash==300000)
  {
    printf("the amount  you have enter is being processing for with draw \n");
  }
  else{
    printf("the amount rs you have enter is  not being processing for with draw \n");
  }
  
  }
case 3:
printf("how much amount do you want to deposite \n");
scanf("%lf",&amount);
printf("amount you have deposite = %lf",amount);

    break;
    default:
    printf("plz enter valid option");

break;
   }
 
 
 }
 else{
  printf("invalid pin code plz try again");
 }
}