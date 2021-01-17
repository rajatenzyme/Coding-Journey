// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find majority element in the array
// a: input array
// size: size of input array
int majorityElement(int a[], int size)
{
    
    // your code here
    int z = size/2;
    //int arr[size] = {0};
    unordered_map<int,int> mp;
    for(int i =0; i<size; i++)
    {
        mp[a[i]]++;
    }
    //int ans = -1;
    for(auto it: mp)
    {
       if(it.second > z)
       {
           return it.first;
       }
    }
    
  
    return -1;
    
    
}

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        cout << majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends