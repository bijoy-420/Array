#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    for(int i=0,j=n-1;i<j;i++,j--){
        int tmp;
        tmp=b[j];
        b[j]=b[i];
        b[i]=tmp;

    }
   int cnt=0;
   for(int i=0;i<n;i++){
    if(b[i]!=a[i]){
        cnt++;
    }
   }
   //for(int i=0;i<n;i++){
    if(cnt==0){
        printf("palindrome\n");
    }
    else
        printf("Not palindrome");
   //}
   return 0;
}
