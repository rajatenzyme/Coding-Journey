#include<bits/stdc++.h>
using namespace std;


void kclosest(int a[], int n, int x, int k)
{
    priority_queue<pair<int, int>> maxh;

    for(int i=0;i<n;i++)
    {
        maxh.push({abs(a[i]-x), a[i]});
        if(maxh.size()>k)
        {
            maxh.pop();
        }
    }

    while (maxh.size()>0)
    {
        cout<<maxh.top().second<<" ";
        maxh.pop();
    }
    
}

int main()
{
    int n, k, x;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>k>>x;
    kclosest(a,n,x,k);
}