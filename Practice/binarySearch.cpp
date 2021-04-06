#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int l = 0;
    int r = n-1;
    
    while(l<=r)
    {
        
        int mid = (l+r)/2;
        
        if(a[mid] == q)
        {
            //std::cout << " Found " << std::endl;
            cout<< mid;
            break;
        }
        else if(a[mid]>q)
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
        
    }
}



Biller Name 	Bill Amount 	Transaction ID 	Transaction Date 	Mode of Payment 	Status
INDIAN INSTITUTE OF TECHNOLOGY JAMMU	11250	21040693623775	06 Apr 2021 12:23	DEBIT_CARD	Paid
INDIAN INSTITUTE OF TECHNOLOGY JAMMU	2250	21040593591821	05 Apr 2021 07:18	DEBIT_CARD	Paid
INDIAN INSTITUTE OF TECHNOLOGY JAMMU	35000	20123184329893	31 Dec 2020 09:51	DEBIT_CARD	Paid
INDIAN INSTITUTE OF TECHNOLOGY JAMMU	35000	20090174673127	01 Sep 2020 05:20	DEBIT_CARD	Paid
INDIAN INSTITUTE OF TECHNOLOGY JAMMU	300	    20053167593119	31 May 2020 09:10	DEBIT_CARD	Paid