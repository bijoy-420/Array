#include<stdio.h>
#define max 40
int main()
{
    //int n,m;
    //scanf("%d %d",&n,&m);
    int a[max][max],b[max][max];
    int arows,acol,brows,bcol;
    printf("Enter the row and column of the matirx a:");
    scanf("%d %d",&arows,&acol);
    printf("Enter the element of matrix a:\n");
    for(int i=0;i<arows;i++){
        for(int j=0;j<acol;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //printf("\n");
     printf("Enter the row and column of the matirx a:");
    printf("Enter the element of matrix b:\n");
    for(int i=0;i<brows;i++){
        for(int j=0;j<bcol;j++){
            scanf("%d",&b[i][j]);
        }

    }
     printf("\n");
    //printf("\n");
    int product[max][max];
    int sum=0;
    for(int i=0;i<arows;i++){
        for(int j=0;j<bcol;j++){
            for(int k=0;k<brows;k++){
                sum+=a[i][k]*b[k][j];
            }
            product[i][j]=sum;
            sum=0;
        }
    }
    for(int i=0;i<arows;i++){
        for(int j=0;j<bcol;j++){
            printf("%d",product[i][j]);
        }
        printf("\n");
    }
    return 0;
}
