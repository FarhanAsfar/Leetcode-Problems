#include <bits/stdc++.h>
using namespace std;

int findingPivot(int arr[], int n)
{
    int start = 0;
    int endd = n;

    while(start<=endd){
        int mid = start+(endd-start)/2;

        if(mid<endd && arr[mid]>arr[mid+1]){
            return mid;
        }
        if(mid>start && arr[mid]<arr[mid-1]){
            return mid-1;
        }
        else{
            return -1;
        }
    }
    return -1;
}
int binarySearch(int arr[], int n, int target)
{
    int start = 0;
    int endd = n;

    while(start<=endd){
        int mid = start+(endd-start)/2;

        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            endd = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;
}

int Search(int arr[], int n, int target){
    int pivot = findingPivot(arr, n);
    int start =0;
    int endd = n;

    if(pivot==-1){
        return binarySearch(arr, n, target);
    }
    else{
        while(start<=endd){
            int mid = start+(endd-start)/2;

            if(target==arr[mid]){
                return mid;
            }
            else if(target<pivot){
                endd = pivot-1;
            }
            else{
                start = pivot+1;
            }
        }
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target; cin>>target;
    int i = Search(arr, n, target);

    cout<<i;
}
