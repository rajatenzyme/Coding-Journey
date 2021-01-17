// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends


class Solution
{
public:
    int setBits(int n)
    {
        int c=0;
        while(n!=0)
        {
            int rem = n%2;
            if(rem != 0)
            c++;
            n/=2;
        }
        return c;
        
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        
        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}
  // } Driver Code Ends