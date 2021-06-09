#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int res=0;
    int arr[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
    while(i<n-1 && arr[i]==arr[i+1])
    {
        i++;
    }
    res++;
    }
    cout<<res;
}