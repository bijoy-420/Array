#include<stdio.h>
int main()
{
    int mul[5][5];
    for(int i=1;i<5;i++){
        for(int j=1;j<5;j++){
            mul[i][j]=i*j;
        }
        printf("%d",mul[i][j]);
    }
    return 0;
}
