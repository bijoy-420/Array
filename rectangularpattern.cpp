#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter the value of n:\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int i=0;i<n-1;i++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
