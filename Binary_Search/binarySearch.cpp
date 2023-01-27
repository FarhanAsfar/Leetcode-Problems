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
            return mid; //ans
        }
    }
    return end; //not found
   
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
    
    cin>>target;

    sort(arr, arr+n);

    int i = binarySearch(arr, n, target);

    cout<<i;

    return 0;
}