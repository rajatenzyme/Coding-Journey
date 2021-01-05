#include<bits/stdc++.h>
using namespace std;


int main()
{
    string a,b;
    cin>>a>>b;
    int m = a.length();
    int n = b.length();
    
    string s = a+a;
    
   if(s.find(b))
   cout<<"YES";
   else cout<<"NO";
  
    return 0;
}
