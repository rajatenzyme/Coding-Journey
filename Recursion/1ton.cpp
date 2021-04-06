#include<bits/stdc++.h>
using namespace std;

void onetoN(int n)
{
    if(n==0)
        return;
    onetoN(n-1);
    cout<<n<<endl;

}
void Nto1(int n)
{
    if(n==0)
        return;
    cout<<n<<endl;
    Nto1(n-1);
    //solve(n-1);
    

}


int main()
{
    Nto1(5);
}