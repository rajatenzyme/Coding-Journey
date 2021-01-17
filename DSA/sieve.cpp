#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 50;
    vector<bool> is_prime(n+1, true);
    for(int i=2; i*i<=n; i++)
    {
        if(is_prime[i])
        {
            for(int j=i*i; j<=n; j+=i)
            {
                is_prime[j] = false;
            }
        }
    }
    int num_of_primes=0;
    for(int i=2;i<=n;i++)
    {
        if(is_prime[i])
        {
        num_of_primes++;
        cout<<i<<" ";
        }
    }
    cout<<endl;
    
    cout<<num_of_primes;
    
}