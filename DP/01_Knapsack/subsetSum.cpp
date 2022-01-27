#include<bits/stdc++.h>
using namespace std;

// int subsetSum( int a[], int s, int n)
// {
//     if(s==0)
//     return 1;
// if(n==0)
// return 0;

//     if(a[n-1]<=s)
//     {
//         return subsetSum(a,s-a[n-1], n-1) ||  subsetSum(a,s,n-1);
//     }
//     else
//     {
//         return subsetSum(a,s,n-1);
//     }

// }

int equalPartition(int N, int arr[])
    {
        int sum = 0;
        for(int i=0;i<N;i++)
        {
            sum+=arr[i];
        }
        if(sum%2!=0)
        return 0;
        
        int s = sum/2;
        
        bool t[N+1][s+1];
        for(int i=0;i<N+1;i++)
        {
            for(int j=0;j<s+1;j++)
            {
                if(i==0)
                t[i][j] = false;
                if(j==0)
                t[i][j] = true;
            }
        }
        for(int i=1;i<N+1; i++)
        {
            for(int j=1;j<s+1;j++)
            {
                if(arr[i-1]<=j)
                t[i][j] = t[i-1][j-arr[i-1]] || t[i-1][j];
                else
                t[i][j] = t[i-1][j];
            }
        }
        return t[N][s]?1:0;
        
        
    }


bool subsetSum( int a[], int s, int n)
{  
    bool t[n+1][s+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<s+1;j++)
        {
            if(i==0)
            t[i][j] = false;
            if(j==0)
            t[i][j] = true;
        }
    }
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<s+1;j++)
        {
            if(a[i-1]<=j)
            t[i][j] = (t[i-1][j-a[i-1]]) || t[i-1][j];
            else
            t[i][j] = t[i-1][j];
        }
    }
    return t[n][s];
}

int main()
{

int a[5] = {2,3,7,8,10};
int s = 11;
bool ans = subsetSum(a,s,5);
cout<<ans;
}