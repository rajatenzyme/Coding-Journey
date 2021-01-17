#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin>>s;
    map<char, int> mp;
    for(int i=0; i<26; i++)
    {
        mp.insert({char(97+i),0});
    }
    
    int n = s.length();
    for(int i=0; i<n ; i++)
    {
        map<char, int>::iterator it = mp.find(s[i]);
        (it->second)++;
    }
    for(auto it = mp.begin(); it!= mp.end(); it++)
    {
        //if(it->second > 1)
        cout<<it->first<<":"<<it->second<<endl;
        
    }
  
  
    return 0;
}
