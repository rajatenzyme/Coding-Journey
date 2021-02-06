#include<bits/stdc++.h>
using namespace std;



int subsetSum( int a[], int n)
{
    int s = accumulate(a,a+n,0);
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

    int ans = INT_MAX;

    for(int i=0;i<s+1;i++)
    {
        if(t[n][i] == true)
        ans = min(ans, abs(s - 2*i));
    }
    return ans;
}
// int minDiff ( int a[], int n)
// {
//     int range = 0;
//     for(int i=0;i<n;i++)
//     {
//         range+=a[i];
//     }
//     //range/=2;
//     vector<int> vect;
//     vect = subsetSum(a, range, n);
//     int ans = INT_MAX;
//     for(int i=0;i<vect.size();i++)
//     {
//         ans = min(ans, range - 2*vect[i]);
//     }
//     return ans;
// }

int main()
{

int a[4] = {1,6,11,5};
//int s = 11;
int ans = subsetSum(a,4);
cout<<ans;
}