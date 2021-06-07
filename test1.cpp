//Author:- Rajat Mittal
//M.Tech. CSE IIT JAMMU (J.K.)
//2020PCT0066

#include<bits/stdc++.h>
using namespace std;
 
#define ll long long 
#define INF 1000000007
#define MOD 1000000007

void solve()
{
	string s1,s2,s3;
	cin>>s1>>s2>>s3;
	int num_x = count(s1.begin(),s1.end(),'X') + count(s2.begin(),s2.end(),'X') + count(s3.begin(),s3.end(),'X');
	int num_zero = count(s1.begin(),s1.end(),'O') + count(s2.begin(),s2.end(),'O') + count(s3.begin(),s3.end(),'O');
	int num_blank = count(s1.begin(),s1.end(),'_') +count(s2.begin(),s2.end(),'_') +count(s3.begin(),s3.end(),'_') ;
	cout<<num_x<<" "<<num_zero<<" "<<num_blank<<endl;
}



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);                                
    int t;
    cin>>t;  
    while(t--)
    {
        solve();
    }    
}