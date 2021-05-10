#include<bits/stdc++.h>
using namespace std;

void myInsert( stack<int> &st, int val)
{
    if(st.size() == 0 || st.top()<=val)
    {
        st.push(val);
        return;
    }
    int temp = st.top();
    st.pop();
    myInsert(st, val);
    st.push(temp);
}

void mySort(stack<int> &st)
{
    if(st.size() == 1) return;
    
    int val = st.top();
    st.pop();
    mySort(st);
    myInsert(st, val);
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

    mySort(st);

    while(st.size()!=0)
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}
/*
5
3 6 2 8 4
*/