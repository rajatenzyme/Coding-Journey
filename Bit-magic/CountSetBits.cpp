#include <iostream>
using namespace std;

int countSet(int n){
    if(n == 0)
        return 0;
    
    return (n & 1) + countSet(n>>1);
}


int main() {
    int n;
    cin>>n;
    cout<<countSet(n);
}
