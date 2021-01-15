// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends


class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int b[n],a1,a2;
        for(int i=1;i<=n;i++)
        {
            b[i] = 0;
        }
        //int b[n] = {0};
        for(int i=0;i<n;i++)
        {
            b[arr[i]]++;
        }
        int c[2];
        for(int i=1;i<=n;i++)
        {
            if(b[i]>1)
            {
                a1 = i;
                c[0] = a1;
            }
            if(b[i] == 0)
            {
                a2 = i;
                c[1] = a2;
            }
        }
        
        return c;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends