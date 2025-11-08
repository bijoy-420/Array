
#include<stdio.h>
int main()
{
    int a[]={10,20,30,40,50,60,70,80,90,100};
    int b[10];
    for(int i=0,j=9;i<10;i++,j--){
        b[j]=a[i];
        //printf("%d",b[j]);
    }
    for(int i=0;i<9;i++){
        a[i]=b[i];
    }
    for(int i=0;i<10;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}

