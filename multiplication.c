#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[10][10],b[10][10],c[10][10];
    printf("enter element of matirx a:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("a[%d][%d] =",i,j);
            scanf("%d",&a[i][j]);

        }
        printf("\n");
    }


     printf("enter element of matirx b:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("b[%d][%d] =",i,j);
            scanf("%d",&b[i][j]);

        }
        printf("\n");
    }

    printf("multiplication\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int k=0;k<n;++){
                sum+=a[i][k]*b[k][j];

            }
            c[i][j]=sum;
            sum=0;
        }
    }

    printf("output\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d",c[j][j]);
        }
        printf("\n");
    }



    return 0;








}
