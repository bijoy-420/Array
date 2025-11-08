#include<stdio.h>
int main()
{
    int student=100,number;
    int result[11]={0};
    for(int i=1;i<=100;i++){
        scanf("%d",&number);
        result[number/10]++;
    }
    printf("group\tRange\tFrequency\n");
    int low,high;
    for(int i=0;i<11;i++){
        low=i*10;
        if (i==10)
            high=100;
        else
            high=low+9;
        printf("%2d %3d to %3d %d\n",i+1,low,high,result[i]);
    }
    return 0;
}
