//Author:- Rajat Mittal
//M.Tech. CSE IIT JAMMU (J.K.)
//2020PCT0066

#include<bits/stdc++.h>
using namespace std;
 
#define ll long long 
#define int ll
#define ps push
#define pb push_back
#define INF 1000000007
#define MOD 1000000007
#define mp make_pair
#define rep(i,a,b) for (int i = a; i < b; i++)
#define repd(i,a,b) for (int i = a; i >= b; i--)
#define all(v) v.begin(),v.end()
#define pii pair<int,int>
#define F first
#define S second
#define mii map<int,int>
#define vi vector<int>
#define vvi vector<vi>
#define vpii vector<pair<int,int>>
#define itr :: iterator it
#define WL(t) while(t --)
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/gcd((a),(b))
#define debug(x) cout << x << endl;
#define debug2(x,y) cout << x << " " << y << endl;
#define debug3(x,y,z) cout << x << " " << y << " " << z << endl;

ll power(ll x, ll n) 
{ 
    ll res = 1; 
    while (n) { 
        if (n & 1) 
            res = res * x % MOD; 
        n = n / 2; 
        
        x = x * x % MOD; 
    } 
    return res; 
} 

void solve(){
    cout<<"Hello Rajat";
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);                                
     

        solve(); 
}