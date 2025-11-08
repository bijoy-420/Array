#include<stdio.h>
int main()

{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int j=0;j<3;j++){
           //printf("\n");
        for(int i=0;i<3;i++){
            printf("%d",a[j][i]);
        }
    printf("\n");
    }
    return 0;
}
