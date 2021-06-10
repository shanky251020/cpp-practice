#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m =3,n=3;
 vector<vector<int>> vect
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    vector<vector<int>> vect1
    {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            vect1[i][j]=vect[j][i];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<vect1[i][j];
        }
        cout<<endl;
    }

    }
}