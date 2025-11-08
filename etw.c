#include<stdio.h>
int main()
{
    int a[5][5];
    for(int i=1;i<5;i++){
        for(int j=1;j<5;j++){
            a[i][j]=i*j;
        }
    }
    for(int i=1;i<5;i++){
        for(int j=1;j<5;j++){
            printf("%d\n",a[i][j]);
        }
    }
    return 0;
}
