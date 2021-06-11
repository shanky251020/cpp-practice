#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int arr[n];
    int count_odd=0;
    int count_even=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
        count_odd++;
        }
        else if(arr[i]%2==0)
        {
            count_even++;
        }
        else
        count_odd++;
    }
    cout<<count_odd<<" ";
    cout<<count_even<<endl;
}