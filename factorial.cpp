#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int ans=1;
    while(n>0)
    {
        ans=ans*n;
        n--;
    }
    cout<<ans;
    return 0;
}