#include <bits/stdc++.h>
using namespace std;

struct position{
int x, y;
};

//
void solve(){
int arr[3][3] = {{1,0,0}, {1,0,0}, {1,9,1}};
int visit[3][3] = {{0, 0, 0},{0, 0, 0},{0, 0, 0}};
queue<pair<position, int>>q;
q.push({{0, 0}, 0});
visit[0][0] = 1;

while(!q.empty()){
    pair<position, int> pir= q.front();
    position p = pir.first;
    int dis = pir.second;
    q.pop();

    if(p.x+1 <3 && visit[p.x+1][p.y]==0){
        q.push({{p.x+1, p.y}, dis+1});
        visit[p.x+1][p.y] = 1;
        if(arr[p.x+1][p.y] == 9){ 
                cout<<dis+1;
                break;
        }
    }
    if(p.x-1 >= 0 && visit[p.x-1][p.y]==0){
        q.push({{p.x-1, p.y}, dis+1});
        visit[p.x-1][p.y] = 1;
        if(arr[p.x-1][p.y] == 9){
                cout<<dis+1;
                break;
        }
    }
    if(p.y+1 <3 && visit[p.x][p.y+1]==0){
        q.push({{p.x, p.y+1}, dis+1});
        visit[p.x][p.y+1] = 1;
        if(arr[p.x][p.y+1] == 9){
                cout<<dis+1;
                break;
        }
    }
    if(p.y-1 >= 0 && visit[p.x][p.y-1]==0){
        q.push({{p.x, p.y-1}, dis+1});
        visit[p.x][p.y-1] = 1;
        if(arr[p.x][p.y-1] == 9){
                cout<<dis+1;
                break;
        }
    }
}

}

int main()
{
ios_base:: sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int t; t=1;

while(t--){
    solve();
}

}



// Given a matrix with values 0 (trenches) , 1 (flat) , and 9 (obstacle) you have to find minimum distance to reach 9 (obstacle). If not possible then return -1.
// The demolition robot must start at the top left corner of the matrix, which is always flat, and can move on block up, down, right, left.
// The demolition robot cannot enter 0 trenches and cannot leave the matrix.
// Sample Input :
// [1, 0, 0],
// [1, 0, 0],
// [1, 9, 1]]
// Sample Output :
// 3
// This question can be solved by using BFS or DF