#include <bits/stdc++.h>
using namespace std;


int findPivot(int arr[], int low, int high)
{
	int mid=low+(high-low)/2;
	
	while(low<=high)
	{
		// base case
    	if((arr[mid]>arr[mid+1]) && (arr[mid]>arr[mid-1]))
    	{
    		return mid;
    		break;
		}
		//search in right half when current element is > last element of the array
		else if((arr[mid]>arr[high]))
		{
			low=mid+1;
		}
		//search in left half when current element is < first element of the array
		else if((arr[mid]<arr[low]))
		{
			high=mid-1;
		}
	}
	
    
}

// Driver program to test above function
int main()
{
    int arr[]={ 7,8,9,1,2,3 };
    int n=sizeof(arr)/sizeof(arr[0]);
    findPivot(arr,0,n-1);
    return 0;
}
