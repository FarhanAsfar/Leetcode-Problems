#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int target){
    int start = 0;
    int end = n;

    while(start<=end){
        int mid = start+(end-start)/2;

        if(target<arr[mid]){
            end = mid-1;
        }
        else if(target>arr[mid]){
            start = mid+1;
        }
        else{
            return end; //ans
        }
    }
    return -1; //target not found

    //return 'end' to get the floor and
    //return 'start' to get the ceiling
}
int main()
{
    int n, target;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cin>>target;

    sort(arr, arr+n);

    int i = binarySearch(arr, n, target);

    cout<<i;

    return 0;
}
