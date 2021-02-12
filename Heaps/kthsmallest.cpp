#include<bits/stdc++.h>
using namespace std;

int kthSmallest ( int a[], int n, int k)
{
    //int n = sizeof(a)/sizeof(a[0]);

    priority_queue<int> maxHeap;

    for(int i=0; i<n;i++)
    {
        maxHeap.push(a[i]);
        if(maxHeap.size()>k)
        maxHeap.pop();
    }
    return maxHeap.top();
}

int main()
{
    int n, k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>k;
    cout<<kthSmallest(a,n,k);
}

//complexity nlog(k)