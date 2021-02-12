#include<bits/stdc++.h>
using namespace std;

void topKFreq(int a[], int n, int k)
{
    unordered_map<int, int> mp;
    for(int i=0;i<n;i++)
    {
        mp[a[i]]++;
    }
    typedef pair<int,int> ppi;
    priority_queue<ppi, vector<ppi>, greater<ppi>> minh;

    for(auto i = mp.begin(); i!=mp.end();i++)
    {

        minh.push({i->second, i->first});
        if(minh.size()>k)
        minh.pop(); 

     }

    while (minh.size()>0)
    {
        cout<<minh.top().second<<" ";
        minh.pop();
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
    topKFreq(a,n,k);
}