#include<stdio.h>
int main()
{


  printf("enter number of rows and colom\n");
  int mat[3][3];
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        scanf("%d",&mat[i][j]);
    }
  }
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d",mat[i][j]);
    }
    printf("\n");
  }
  int n;
  printf("transver\n");
  for(int i=0;i<3;i++){
    for(int j=i;j<3;j++){
        n=mat[i][j];
        mat[i][j]=mat[j][i];
        mat[j][i]=n;
    }
  }
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d",mat[i][j]);
    }
    printf("\n");
  }













  return 0;
}
