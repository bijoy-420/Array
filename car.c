#include<stdio.h>
int main()
{
    int car;
    int frequency[5][5]={0};
    char city;
    printf("for each person enter the city code\n");
    printf("followed by the car code\n");
    for(int i=0;i<100;i++){
        scanf("%c",&city);
        if(city=='X')
            break;
        scanf("%d",&car);
        switch(city){

                    case 'B':frequency[1][car]++;
                    break;
                    case 'C':frequency[2][car]++;
                    break;
                    case 'D':frequency[3][car]++;
                    break;
                    case 'M':frequency[4][car]++;
                    break;



        }
    }

}

