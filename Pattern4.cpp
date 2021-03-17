#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5,i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        cout<<" " ;
        int k=i+1;
        for(j=0;j<=i;j++)
        cout<<k--;
        cout<<"\n";
    }
    return 0;
    }
