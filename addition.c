#include<stdio.h>
int main()
{
    int n,m;
    int a[10][10],b[10][10],c[10][10];
    printf("Enter the of rows and column:");
    scanf("%d %d",&n,&m);

    printf("Enter Element for a matrix:\n ");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n Enter element of matrix b:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("b[%d][%d] =",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    printf("matrix of a\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("print matrix b\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }


    printf("Addition two matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           c[i][j]=a[i][j]+b[i][j];
        }

    }
     printf("print matrix c\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }








    return 0;
}
