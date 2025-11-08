#include<stdio.h>
 int main()
{
    int total[10]={78,89,78,67,78,89,90,90,88,76};
    int cnt[101]={0};
    /*for(int i=0;i<101;i++){
    cnt[i]={0};
    }*/
    for(int i=0;i<10;i++){
    //cnt[total[i]]++;
    int marks=total[i];
    cnt[marks]++;
    }
    for(int i=50;i<=100;i++){
    printf("marks:%d count:%d\n",i,cnt[i]);}
    return 0;
}
