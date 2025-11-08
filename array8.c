#include<stdio.h>
int main()
{
    int first[10]={50,60,56,66,78,67,87,55,67,67};
    int second[10]={76,87,97,78,78,67,56,56,54,67};
    int final[10]={67,56,66,78,89,76,65,75,78,78};
    double total[10];
    int cnt=0,marks;


    for(int i=0;i<10;i++){
        total[i]=first[i]/4.0+second[i]/4.0+final[i]/2.0;
    }
    for(int i=1;i<10;i++){
        printf("Roll no:%d\ttotal marks:%0.0lf\n",i,total[i-1]);
    }
    for(marks=50;marks<=100;marks++){
            cnt++;

    }
    printf("marks:%d count:%d\n",marks,cnt);
    return 0;
}
