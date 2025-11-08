#include<stdio.h>
int main()
{
    int mul[10][10];

        for(int r=0;r<10;r++){
            for(int c=0;c<10;c++){
                mul[r][c]=(r+1)*(c+1);
            }
        }

        for(int i=1;i<=10;i++){
            printf("%d  ",i);
        }


        for(int i=0;i<10;i++){
            printf("%d  ",i+1);
            for(int j=0;j<10;j++){
                printf("%d  ",mul[i][j]);
            }
            printf("\n");
        }

    return 0;
}
