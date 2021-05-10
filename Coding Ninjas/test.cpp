#include<bits/stdc++.h>
using namespace std;
vector<int>  leftrotate(vector<int>& vec, int d)
{
    vector<int> ans;
    while(d--)
    {
        
        vec.push_back(vec[0]);
        vec.erase(vec.begin());

        vec.insert( vec.end(), vec.begin(), vec.end() );
        int sum = accumulate(vec.begin(), vec.end(), 0);
        ans.push_back(sum);

    }
 

}
vector<int> righrotate(vector<int>& vec, int d)
{
    
    vector<int> ans;
    while(d--)
    {
        int val = vec.back();
        vec.insert(vec.begin(),val);
        vec.erase(vec.end());

        vec.insert( vec.end(), vec.begin(), vec.end() );
        int sum = accumulate(vec.begin(), vec.end(), 0);
        ans.push_back(sum);

    }
 

}
int main()
{
    
    int t;;
    cin>>t;
    while(t--)
    {
        vector<int> v;
        int n,q,r;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        cin>>q;
        while(q--)
        {
            vector<int> res;
            cin>>r;
            if(r<0)
            {

              res = leftrotate(v,abs(r));

            }
            else{
              res =  righrotate(v,r);
            }
            for(auto itr = res.begin(); itr!=res.end();itr++)
            {
                cout<<*itr<<endl;
            }
        }
    }
}