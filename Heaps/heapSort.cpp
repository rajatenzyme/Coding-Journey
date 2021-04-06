#include<bits/stdc++.h>
using namespace std;

void HeapSort ( int a[], int n)
{
    priority_queue<int, vector<int>, greater<int>> pq;

    for(int i=0;i<n;i++)
    {
        pq.push(a[i]);
    }
    
    while (pq.size()>0)
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    
}


int main()
{
    int n=5;
    //cin>>n;
    int a[] ={32, 65, 98, 53, 90};

    HeapSort(a,n);
}