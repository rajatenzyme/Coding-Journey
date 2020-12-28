#include<bits/stdc++.h>
using namespace std;

// int main()
// {
// 	int arr[] = {1,2,3,4,5,6,7,8,9,10};
// 	int min = arr[0] ;
// 	int max = arr[0];
// 	for(int i = 0 ; i< sizeof(arr)/sizeof(arr[0]); i++)
// 	{
//  		if (arr[i]>=max)
//  		{
//  			max = arr[i];
//  		}
// 	}
// 	for(int i = 0 ; i< sizeof(arr)/sizeof(arr[0]); i++)
// 	{ 
//  		if(arr[i]<min)
//  		{
//  			min = arr[i];
//  		}
// 	}
// 	cout<<min<<" "<<max;
// }

struct Pair
{
	int min;
	int max;
};

struct Pair getMinMax ( int a[], int  n)
{
	struct Pair minmax;
	int i;

	if(n==1)
	{
		minmax.min = a[0];
		minmax.max = a[0];
	}

	if(a[0]>a[1])
	{
		minmax.max = a[0];
		minmax.min = a[1];
	}
	else
	{
		minmax.max = a[1];
		minmax.min = a[0];
	}
	for(i = 2; i < n; i++)
    {
        if (a[i] > minmax.max)     
            minmax.max = a[i];
             
        else if (a[i] < minmax.min)     
            minmax.min = a[i];
    }
    return minmax;	
}

int main()
{
    int arr[] = { 1000, 11, 445, 
                  1, 330, 3000 };
    int arr_size = 6;
     
    struct Pair minmax = getMinMax(arr, arr_size);
     
    cout << "Minimum element is "
         << minmax.min << endl;
    cout << "Maximum element is "
         << minmax.max;
          
    return 0;
} 
