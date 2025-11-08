#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mx=arr[0];
    int mxindex=0;
    for(int i=0;i<n;i++){
        if(arr[i]>mx){
            mx=arr[i];
            mxindex=i;
        }
    }
    
        cout<<"the max number is:"<<mx<<endl;
        cout<<"the location of that number is:"<<mxindex<<endl;
    
}