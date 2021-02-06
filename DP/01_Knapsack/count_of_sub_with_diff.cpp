#include<bits/stdc++.h>
using namespace std;

int count_ss_with_diff(int a[] ,int diff,  int n)
{

    int s = accumulate(a,a+n,0);
    int sum = (diff + s) /2;

    int t[n+1][sum+1];
    
    for(int i=0;i<n+1; i++)
    {
        for(int j=0;j<sum+1;j++)
        {
            if(i==0)
            t[i][j] = 0;
            if(j==0)
            t[i][j] = 1; 
        }
    }

    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<sum+1;j++)
        {
            if(a[i-1]<=j)
            t[i][j] = t[i-1][j-a[i-1]] + t[i-1][j];

            else
            t[i][j] = t[i-1][j]; 
        }
    }
    return t[n][sum];
}



int main()
{
    // int a[4] = {1,1,2,3};
    // int diff = 1;
    int a[] = {1};
    int diff = 2;
    //int sum = 10;
    int n = 1;
    cout<<count_ss_with_diff(a,diff,n)<<endl;
}