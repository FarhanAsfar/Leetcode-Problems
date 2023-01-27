#include <bits/stdc++.h>
using namespace std;

int binarySearchOA(int arr[], int n, int target){ //order agnostic
	int start = 0;
	int end = n-1;

	bool ascending = false;
	if(arr[start]<arr[end]){
		ascending = true;
	}

	while(start<=end){
		int mid = start + (end-start)/2;

		if(arr[mid]==target){
			return mid;
		}

		else if(ascending==true){ //if array is sorted in ascending order.
			if(arr[mid]>target){
				end = mid-1;
			}
			else if(arr[mid]<target){
				start = mid+1;
			}
		}
		else{					//if arry is sorted in descending order.
			if(arr[mid]<target){
				end = mid-1;
			}
			else if(arr[mid]>target){
				start = mid+1;
			}
		}
	}
	return -1;
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n, target;
	cin>>n;
	int arr[n];

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	//we assume that the given array is sorted but we don't know if it's in ascending order or descending order.

	cin>>target;

	int i = binarySearchOA(arr, n, target);
	cout<<i;

	return 0;
} 