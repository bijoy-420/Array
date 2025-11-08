#include<stdio.h>
int main()
{
    int num1,num2;
    printf("please enter a number:");
    scanf("%d",&num1);
    printf("please enter the another number:");
    scanf("%d",&num2);
    int sum;
    sum=num1+num2;
    char sign='+';
   printf("%d %c %d = %d",num1,sign,num2,sum);


}
