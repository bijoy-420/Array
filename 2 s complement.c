#include<stdio.h>
int main()
{
    char binary[100];
    scanf("%s",&binary);
    char result[strlen(binary)+1];
    result[strlen(binary)]='\0';
    int i=strlen(binary)-1;
    for(;binary[i]!='1';i--){
        result[i]=binary[i];
    }
    result[i]=binary[i];
    i--;
    for(;i>=0;i--){
        if(binary [i]=='1') result[i]='0';
        else
            result[i]='1';
    }
    printf("%s",result);
    return 0;
}
