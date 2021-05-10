#include <bits/stdc++.h>
#define MOD 1000000007;
using namespace std;

int nCr(int n, int k)
{

    int C[k + 1];
    memset(C, 0, sizeof(C));
 
    C[0] = 1; // nC0 is 1
 
    for (int i = 1; i <= n; i++) {
        // Compute next row of pascal triangle using
        // the previous row
        for (int j = min(i, k); j > 0; j--)
            C[j] = C[j] + C[j - 1];
    }
    for(int i=0;i<sizeof(C)/sizeof(C[0]);i++)
    {
        cout<<C[i]<<" ";
    }
    return C[k];
}

int main() {
    
    cout<<nCr(4,2);
    return 0;
}
