//follow the mwrge sort algo procedure
	    
	    int i=0,j=0,k=0;
	    int arr[n+m];
	    while(i<n && j<m)
	    {
	        if(arr1[i]<arr2[j])
	        {
	            arr[k] = arr1[i++];
	            k++;
	        }
	        else
	        {
	            arr[k] = arr2[j++];
	            k++;
	        }
	    }