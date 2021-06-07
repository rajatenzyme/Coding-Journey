//each from top left to bottom right using three operations;
// down, right, diagonal




#include<bits/stdc++.h>
using namespace std;


//Brute force recursively

// int minCostPath(int **input,int m, int n, int i, int j){
    
//     //BASE CASE
//     if(i==m-1 && j==n-1) return input[i][j];
    
        
//     if(i >= m || j>=n){
//         return INT_MAX;
//     }
    
//     // Recursive calls
//     int x = minCostPath(input, m, n, i, j+1);
//     int y = minCostPath(input, m, n, i+1, j+1);
//     int z = minCostPath(input, m, n, i+1, j);
    
//     //Small calc
    
    
//     int ans = min(x,min(y,z)) + input[i][j];
//     //cout<<"i:"<<i<<" j:"<<j<<" "<<ans<<endl;
//     return ans;
    
// }

int minCostPath_memo(int **input,int m, int n, int i, int j, int **dp){
    
    //BASE CASE
    if(i==m-1 && j==n-1) return input[i][j];
    
        
    if(i >= m || j>=n){
        return INT_MAX;
    }
    
    //check 

    if(dp[i][j]!=-1){
        return dp[i][j];
    }

    // Recursive calls
    int x = minCostPath_memo(input, m, n, i, j+1, dp);
    int y = minCostPath_memo(input, m, n, i+1, j+1, dp);
    int z = minCostPath_memo(input, m, n, i+1, j, dp);
    
    //Small calc
    
    
    int ans = min(x,min(y,z)) + input[i][j];
    //cout<<"i:"<<i<<" j:"<<j<<" "<<ans<<endl;
    dp[i][j] = ans;
    return ans;
    
}

int minCostPath(int **input, int m, int n){
    int **dp = new int*[m];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            dp[i][j] = -1;
        }
    } 
    return minCostPath_memo(input, m, n, 0, 0, dp);
}

int main()
{
    int m, n;cin>>m>>n;
    int **input = new int*[m];
    for(int i=0;i<m; i++){
        input[i] = new int[n];
        for(int j=0;j<n; j++){
            cin>>input[i][j];
        }
    }
    cout<<minCostPath(input, m, n)<<endl;
}