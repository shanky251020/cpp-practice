#include<iostream>
using namespace std;
 struct point
    {
        int x;
        int y;
    };
int  main()
{
   struct point p;
   p.x=10;
   p.y=20;
   cout<<p.x<<endl;
   cout<<p.y<<endl;
   return 0;
}