#include<bits/stdc++.h>
using namespace std;

void freqSort(int a[], int n)
{
    map<int, int> mp;
    for(int i=0;i<n;i++)
    {
        mp[a[i]]++;
    }
    //typedef pair<int,int> ppi;
    //priority_queue<ppi, vector<ppi>, greater<ppi>> minh;
    priority_queue<pair<int,int>> maxheap;;

    for(auto i = mp.begin(); i!=mp.end();i++)
    {
        if(i->first == i+1->first)
        maxheap.push({i->second, i->first});

     }

    while (maxheap.size()>0)
    {
        int freq = maxheap.top().first;
        while(freq--)
        cout<<maxheap.top().second<<" ";
        maxheap.pop();
    }
    

}



int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //cin>>k;
    freqSort(a,n);
}