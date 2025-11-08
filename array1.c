#include<stdio.h>
int main()
{
    int a[5]={5,10,15,20,35};
    a[0]=100;
    a[2]=200;
    a[3]=300;
    printf("%d %d %d\n",a[0],a[1],a[2]);
    return 0;
}

