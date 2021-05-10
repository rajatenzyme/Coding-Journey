#include<bits/stdc++.h>
using namespace std;

void solve(stack<int> &st, int k)
{
    if(k==1)
    {
        st.pop();
        return;
    }
    
    int temp = st.top();
    st.pop();
    solve(st, k-1);
    st.push(temp);
}

stack<int> delMin (stack<int> &st, int size)
{
    if(size == 0)
        return st;
    
    int k = size/2 + 1;

    solve(st, k);
    return st;
}


int main()
{
    int n;
    cin>>n;
    stack<int> st;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }

    stack<int> newSt = delMin(st, n);

    while(newSt.size()!=0)
    {
        cout<<newSt.top()<<" ";
        newSt.pop();
    }
}