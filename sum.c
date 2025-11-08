#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int value,sum=0;
    //for(int i=0;i<10;i++){
       // scanf("%d",&value);
        //a[i]=value;

    for(int i=0;i<10;i++){
        sum+=a[i]*a[i];
    }
    printf("\n");
    for(int i=0;i<10;i++){
        printf("a[%2d]=%5.2d\n",i+1,a[i]);
        printf("\ntotal = %d\n",sum);
    }
    //printf("%d",sum);

}
