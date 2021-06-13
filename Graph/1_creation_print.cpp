//Adjacency List
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int v, e;
//     cin>>v>>e;
//     vector<int> g[v+1];
    
//     for(int i=0;i<e;i++)
//     {
//         int x, y;
//         cin>>x>>y;
//         g[x].push_back(y);
//         g[y].push_back(x);

//     }
//     for(int i=1;i<=v;i++)
//     {
//         cout<<i<<"-->";
//         for(int j=0;j<g[i].size();j++)
//         {
//             cout<<g[i][j]<<" ";
//         }
//         cout<<endl;

//     }

    
// }



//Adjacency Matrix

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int v, e;
//     cin>>v>>e;

//     int g[v][v];
//     //memset(g, 0, sizeof(0));
//     for(int i =0;i<v;i++)
//     {
//     	for(int j=0;j<v;j++)
//     	{
//     		g[i][j] = 0;
//     	}
//     }
//     //  for(int i =1;i<=v;i++)
//     // {
//     // 	for(int j=1;j<=v;j++)
//     // 	{
//     // 		cout<<g[i][j]<< " ";
//     // 	}
//     //     cout<<endl;
//     // }
//     for(int i=0;i<e;i++)
//     {
//         int x, y;
//         cin>>x>>y;
//         g[x][y] = 1;
//         g[y][x] = 1;

//     }
//     for(int i=0;i<v;i++)
//     {
//         cout<<i<<"-->";
//         for(int j=0;j<v;j++)
//         {
//             cout<<g[i][j]<<" ";
//         }
//         cout<<endl;

//     }

    
// }

#include<bits/stdc++.h>
using namespace std;

void print(int **edges, int n, int start, bool *visited){
    cout<<start<<endl;
    visited[start]=true;
    for(int i=0;i<n;i++){
        if(i == start){
            continue;
        }
        if(edges[start][i] == 1){
            if(visited[i]){
                continue;
            }
            print(edges,n, i, visited);
        }
    }
}

int main(){
    int n, e;
    cin>>n>>e;
    int **edges = new int*[n];
    for(int i=0;i<n;i++){
        edges[i] = new int[n];
        for(int j=0;j< n; j++){
            edges[i][j] = 0;
        }
    }

    for(int i=0;i<e;i++){
        int x, y;
        cin>>x>>y;
        edges[x][y] = 1;
        edges[y][x] = 1;
    }

    bool *visited = new bool[n];
    for(int i=0;i<n;i++){
        visited[i] = false;
    }
    print(edges,n, 0, visited);

    delete[] visited;
    
    for(int i=0;i<n;i++){
        delete[] edges[i];
    }
    delete[] edges;
}