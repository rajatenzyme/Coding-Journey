#UNION

#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t,n,m;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m;
	    int a[n], b[m];
	    unordered_set <int> s;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        s.insert(a[i]);
	    }
	    for(int i=0;i<m;i++)
	    {
	        cin>>b[i];
	        s.insert(b[i]);
	    }
	    cout<<s.size()<<endl;
	    
        
	}
	return 0;
}

#Intersection 
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t,n,m;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m;
	    int a[n], b[m];
	    set <int> s;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        s.insert(a[i]);
	    }
	    for(int i=0;i<m;i++)
	    {
	        cin>>b[i];
	        //s.insert(b[i]);
	    }
	    for(int j = 0; j<m; j++)
	    {
	        if(s.find(b[j])!= s.end())
	        cout<<b[j]<<" ";
	    }
	    //cout<<s.size()<<endl;
	   // for(auto it = s.begin(); it!= s.end(); it++)
	   // {
	   //     cout<<*it<<" ";
	   // }
	   cout<<endl;
	   
	}
	return 0;
}