#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[10][10],b[10][10],c[10][10];
    printf("enter element matrix a:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
                printf("a[%d][%d] =",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }


     printf("enter element matrix b:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
                printf("b[%d][%d] =",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    printf("subtraction\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            c[i][j]=a[i][j]-b[i][j];
        }
        printf("\n");
    }
    printf("output\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;


}

