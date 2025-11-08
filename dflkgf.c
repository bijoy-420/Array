#include<stdio.h>
int main()
{
    int mul[5][11];
    for(int j=0;j<11;j++){
            if(j==0){
                printf("    ");
            }
            else
                printf("%4d",j);
    }
    printf("\n");
    for(int i=1;i<11;i++){
        printf("%4d",i);
        for(int j=1;j<11;j++){
            mul[i][j]=i*j;
            printf("%4d",mul[i][j]);
        }
        printf("\n");
    }

}
