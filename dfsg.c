#include<stdio.h>
int main()
{
    int mul[11][11];
    printf("              Multiplication table\n");
    printf(" ");
    for(int j=0;j<11;j++){
        if (j==0){
            printf(" ");
        }
        else
        printf("%4d",j);
    }
    printf("\n");
    printf("-----------------------------------------------------\n");
    for(int i=1;i<11;i++){
        printf("%d |",i);
        for(int j=1;j<11;j++){
            mul[i][j]=i*j;
            printf("%4d",mul[i][j]);
        }
        printf("\n");
    }
}
