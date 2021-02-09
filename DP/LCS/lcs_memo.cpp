#include<bits/stdc++.h>
using namespace std;

int lcs(string x, string y, int n, int m)
{
    int t[n+1][m+1];
    memset(t, -1, sizeof(t));

    if(n==0 || m==0)
    return 0;

    if(t[n][m]!=-1)
        return t[n][m];
    
    if(x[n-1] == y[m-1])
        return t[n][m] =  1+lcs(x,y,n-1, m-1);
    else
        return t[n][m] = max(lcs(x,y,n-1,m), lcs(x,y,n,m-1));
}

int main()
{
    string x = "abcdef";
    string y = "acdf";
    int n = 6;
    int m = 4;
    cout<<lcs(x,y,n,m);
}