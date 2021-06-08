#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int temp=num;
    int base=1;
    int dec_value=0;
    
    while(temp)
    {
    int last_digit=temp%10;
    temp=temp/10;
    dec_value+=last_digit*base;
    base=base*2;
    }
    cout<<dec_value;
    return 0;
}