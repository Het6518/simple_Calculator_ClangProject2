#include<stdio.h>
#include<math.h>
void menu(){
     printf("\n\n----------------------------------------------------------------\n");
  printf("\n\n Welcome to Simple Calculator\n");
  printf("\nChoose one of the following options: \n");
  printf("\n 1.Addition");
  printf("\n 2.Subtraction");
  printf("\n 3.Multiplication");
  printf("\n 4.Division");
  printf("\n 5.Modulus");
  printf("\n 6.Power");
  printf("\n 7.Exit\n");
  printf("\nNow enter your choice: ") ;
}
double div(double a, double b){
    if(b==0)
    {
fprintf(stderr,"\nInvalid argument for Division");
        return NAN;

    }
    else return a/b;

}
double mod(int a,int b)
{
    if(b==0)
    {
        fprintf(stderr,"\nInvalid argument for Modulus");
        return NAN;
    }
    else return a%b;
}
int main()
{
    int choice;
    double a,b,result;
  while(1){
menu();
  scanf("%d",&choice);
  if(choice==7) break;
  if(choice<1||choice>7)
  {
      fprintf(stderr,"Invalid Menu Choice.");
      continue;
  }
printf("\nEnter the first number: \n");
scanf("%lf",&a);
printf("Enter the second number: ");
scanf("%lf",&b);
switch(choice){
case 1: //add
    result = a+b;
break;
case 2: //subtract
    result = a-b;
break;
case 3:  //multiply
    result = a*b;
break;
case 4:  //divide
    result = div(a,b);
break;
case 5:  //modulus
    result = mod(a,b);
break;
case 6:  //power
    result = pow(a,b);
break;
default :
    break;
}
if(!isnan(result)){
printf("\n\nResult of operation is : %.2f",result);}
    }
}
