#include<iostream>
using namespace std;
int main()
 {
	int t,n,x;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int min =-1 ;
	    int max =-1;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i] == x)
	        {
	            min = i;
	            break;
	        }
	        
	    }
	    for(int i=n-1; i>=0; i--)
	    {
	         if(a[i] == x)
	        {
	            max = i;
	            break;
	        }
	    }
	    if(min==-1 && max ==-1)
	    cout<<-1<<endl;
	    else
	    cout<<min<<" "<<max<<endl;
	}
	
	return 0;
}