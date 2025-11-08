#include<stdio.h>
int main()
{
    int a[]={10,20,30,40,50,60,70,80,90,100};

    int temp;
    for(int i=0,j=9;i<j;i++,j--){
        temp=a[j];
        a[j]=a[i];
        a[i]=temp;
    }
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
