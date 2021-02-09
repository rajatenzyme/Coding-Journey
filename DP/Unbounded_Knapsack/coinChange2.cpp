#include<bits/stdc++.h>
using namespace std;



long long int count( int S[], int m, int n )
    {
       
            long long int t[m+1][n+1];
            
            for(long long int i=0;i<m+1;i++)
            {
                for(long long int j=0;j<n+1;j++)
                {
                    if(i==0)
                    t[i][j] = 0;
                    if(j==0)
                    t[i][j] = 1;
                }
            }
            
            for(long long int i=1;i<m+1;i++)
            {
                for(long long int j=1;j<n+1;j++)
                {
                    if(S[i-1]<=j)
                    {
                        t[i][j] = t[i][j-S[i-1]] + t[i-1][j];
                    }
                    else
                    {
                        t[i][j] = t[i-1][j];
                    }
                    
                }
            }

            //return t[m][n];

            for(int i=1;i<m+1;i++)
            {
                if(t[i][n] == )
            }
        
    }


int main()
{

int coin[] = {1,2,3};
int m = 3;
int n = 5;

int ans = count(coin, m, n);
cout<<ans;
}