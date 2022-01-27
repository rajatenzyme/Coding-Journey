#include <bits/stdc++.h>
using namespace std;
int main() {
    int N = 50;
    vector<int> isPrime(N+1, true);

    for(int i=2;i*i<=N;i++){
        if(isPrime[i]){
            for(int j=i*i;j<=N;j+=i){
                isPrime[j] = false;
            }
        }
    }

    for(int i=2;i<=50;i++){
        if(isPrime[i])
         cout<<i<<" ";
    }
}
