#include <iostream>
using namespace std;

int main() {
	int a[] = { -12, 11, -13, -5, 6, -7, 5, -3, 11};
    int n = sizeof(a) / sizeof(a[0]);
    int left = 0, right = n-1;
    while(left<=right)
    {
        if(a[left]<0 && a[right]<0)
        {
            left++;
        }
        else if(a[left]>0 && a[right]<0)
        {
            swap(a[left], a[right]);
            left++;
            right--;
        }
        else if(a[left]>0 && a[right]>0)
        {
            right--;
        }
        else
        {
            left++;
            right--;
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}