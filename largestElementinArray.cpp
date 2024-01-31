#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    int max = arr[0];

    for(int i=0;i<arr.size();i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}
