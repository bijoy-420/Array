#include<stdio.h>
int main()
{
    int row,col;
    int a[10][10],c[10][10];
    scanf("%d%d",&row,&col);
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Matrix is:");
    for(int i=0;i<row;i++){
            //printf("\t");
        for(int j=0;j<col;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    //input B matrix:
    int b[10][10];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("b[%d][%d] =",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    ///printing b matrix:
    printf("Matrix B:");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}
