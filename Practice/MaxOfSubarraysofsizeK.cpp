#include<bits/stdc++.h>
using namespace std;

void clearHeap(priority_queue<int> x)
{
    while(x.size()>0)
    {
        x.pop();
    }
}

void maxOfSub ( int a[], int n, int k)
{
    priority_queue<int> maxh;

    for(int i=0;i<n;i++)
    {
        while(k--)
        {
        maxh.push(a[i]);
        }
        cout<<maxh.top()<<" ";

        clearHeap(maxh);
    }
}

int main()
{
    int n,k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>k;
    maxOfSub ( a, n, k);
}