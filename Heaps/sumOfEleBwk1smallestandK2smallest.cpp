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
    int n, k1, k2;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>k1>>k2;
    int x = kthSmallest(a,n,k1);
    int y = kthSmallest(a, n, k2);
    cout<<x<<" "<<y<<endl;
    int s =0;
    for(int i = 0;i<n;i++)
    {
        if(a[i]>x && a[i]<y)
        {
            s+=a[i];
        }
    }
    cout<<s<<endl;
}

//complexity nlog(k)