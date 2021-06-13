//https://www.geeksforgeeks.org/trapping-rain-water/

    int trappingWater(int arr[], int n){
        long long ans = 0;
        for(int i=1;i<n-1;i++){
            int leftHighest = arr[i];
            for(int j=0;j<i;j++){
                leftHighest = max(arr[j], leftHighest);
            }
            //cout<<leftHighest<<endl;
            int rightHighest = arr[i];
            for(int j=i+1;j<n;j++){
                rightHighest = max(arr[j], rightHighest);
            }
            
            ans+= min(leftHighest, rightHighest) - arr[i]; 
        }
        return ans;
    }
 // Above solution is O(n2) solution
 //We are using loops for finbding the max height in left and right 

int trappingWater(int arr[], int n){
        long long ans = 0;
        int left[n], right[n];
        int maxleft = INT_MIN;
        left[0] = arr[0];
        for(int i=1; i<n;i++){
            maxleft = max(left[i-1], arr[i]);
            left[i] = maxleft;
        }
        
        int maxright = INT_MIN;
        right[n-1] = arr[n-1];
        
        for(int i=n-2;i>=0;i--){
            maxright = max(right[i+1], arr[i]);
            right[i] = maxright;
        }
        
        for(int i=0;i<n;i++){
            ans+= min(left[i], right[i]) - arr[i];
        }
        
        return ans;
    }