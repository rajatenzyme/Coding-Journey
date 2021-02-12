#include<bits/stdc++.h>
using namespace std;
//typedef pair<int

void kLargest ( int a[], int n, int k)
{
    //int n = sizeof(a)/sizeof(a[0]);

    //priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;

    for(int i=0; i<n;i++)
    {
        minHeap.push(a[i]);
        if(minHeap.size()>k)
        minHeap.pop();
    }
    //return minHeap.top();
    while(minHeap.size()>0)
    {
        cout<<minHeap.top()<<" ";
        minHeap.pop();
    }
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
    kLargest(a,n,k);
}

//complexity nlog(k)