#include<stdio.h>
#include<conio.h>
int main()
{
    int a[3][3],b[3][3];
    clrscr();
    printf("enter element of matrix a:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
                printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("print the matrix a:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("transpose\n");
    for(int i=0;i<3;i++){
        b[i][j]=a[j][i];
    }
    printf("print the transpose matrix:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d",b[i][j]);
        }
        printf("\n");
    }


}
