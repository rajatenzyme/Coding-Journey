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

vector<int> adj[1001];
int vis[1001]; //Visited Array
int dis[1001]; //distance array

//dfs function : also implementing distance 
void dfs(int s ,int d){
    vis[s] = 1;
    dis[s] = d; //initialising distance to the previously calculated distance
    for(int u : adj[s])
    {
        if(!vis[u])
        {
            dfs(u, dis[s]+1);
        }
    }
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);                                
    int n;
    cin>>n;
    for(int i=1;i<=n-1;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    //Boy lives in 1st city and distance is 0
    dfs(1,0);
    int ans = -1, min_dis = INF;
    int q;
    cin>>q;
    for(int i=1;i<=q;i++)
    {
        int girl_city;
        cin>>girl_city;
        if(dis[girl_city] < min_dis )
        {
            min_dis = dis[girl_city];
            ans = girl_city;
        }
        else if(dis[girl_city] == min_dis && girl_city < ans)
        {
            ans = girl_city;
        }

    }
    cout<<ans;
}