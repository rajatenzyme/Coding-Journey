#include<bits/stdc++.h>
using namespace std;

void myInsert( vector<int> &v, int val)
{
    if(v.size() == 0 || v[v.size()-1]<=val)
    {
        v.push_back(val);
        return;
    }
    int temp = v[v.size()- 1];
    v.pop_back();
    myInsert(v, val);
    v.push_back(temp);
}

void mySort(vector<int> &v)
{
    if(v.size() == 1) return;
    
    int val = v[v.size()-1];
    v.pop_back();
    mySort(v);
    myInsert(v, val);
}

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    mySort(v);

    for(auto i : v)
    {
        cout<<i<<" ";
    }
}