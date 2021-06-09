#include<bits/stdc++.h>
using namespace std;
int next_prime(int n)
{
    n++;
    while(true){
    
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        break;
    }
    if(i==n)
    return n;
  n++;  

}
}
int main(){
    int n ;
    cin>>n;
   cout<<next_prime(n);
}