#include<bits/stdc++.h>
using namespace std;
//typedef pair<int

int connectRopesMinCost ( int a[], int n)
{
    //int n = sizeof(a)/sizeof(a[0]);

    //priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;

    int cost = 0;

    
    for(int i=0; i<n;i++)
    {
        minHeap.push(a[i]);
        //if(minHeap.size()>k)
        //minHeap.pop();
    }

    while(minHeap.size()>=2)
    {
       int first = minHeap.top();
       minHeap.pop();
       int second = minHeap.top();
       minHeap.pop();
        cout<<first<<" "<<second<<endl;
       cost+=first + second;
       minHeap.push(first+second);
    }
    return cost;
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
    //cin>>k;
    cout<<connectRopesMinCost(a,n);
}

//complexity nlog(k)