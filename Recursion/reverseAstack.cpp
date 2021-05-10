#include<bits/stdc++.h>
using namespace std;

void rev(stack<int> &st)
{
    if(st.size() == 0)
        return;
    
    int x = st.top();
    st.pop();
    rev(st);
    st.push(x);
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

    rev(st);

    while(st.size()!=0)
    {
        cout<<st.top()<<" ";
        st.pop();
    }
} 