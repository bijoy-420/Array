#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3];
    printf("Matrix a");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
                //printf("a[%d][%d] = ",i,j);
            scanf("%d",a[i][j]);
        }
    }
    printf("\n\n");
    printf("matrix B");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           // printf("b[%d][%d]",i,j);
                scanf("%d",b[i][j]);
        }


    }
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum+=a[i][j]+b[i][j];

        }
    }
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
                c[i][j]=sum;
        printf("%d",c[i][j]);
        }
     }


    return 0;



}
