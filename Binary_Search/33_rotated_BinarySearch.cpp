#include<bits/stdc++.h>
using namespace std;

int findingPivot(vector<int>& nums, int n)
{
    int start = 0;
    int endd = n;

    while(start<=endd)
    {
        int mid = start+(endd-start)/2;

        if(mid<endd && nums[mid]>nums[mid+1])
        {
            return mid;
        }
        if(mid>start && nums[mid]<nums[mid-1])
        {
            return mid-1;
        }
        if(nums[mid]<=nums[start])
        {
            endd = mid-1;
        }
        else
        {
            start = mid+1;
        }
    }
    return -1;
}

int binarySearch(vector<int>& nums, int start, int endd, int target)
{
    while(start<=endd)
    {
        int mid = start+(endd-start)/2;

        if(nums[mid]==target)
        {
            return mid;
        }
        else if(nums[mid]>target)
        {
            endd = mid-1;
        }
        else
        {
            start = mid+1;
        }
    }
    return -1;
}

int Search(vector<int>& nums, int target)
{
    int pivot = findingPivot(nums, nums.size()-1);
    int start =0;
    int endd = nums.size()-1;

    if(pivot==-1)
    {
        return binarySearch(nums, 0, nums.size()-1, target);
    }
    if(nums[pivot]==target)
    {
        return pivot;
    }
    if(target>=nums[0])
    {
        return binarySearch(nums, 0, pivot-1, target);
    }
    return binarySearch(nums, pivot+1, nums.size()-1, target);
} //in leetcode, submit from line 4 to line 74. 

int main()
{
    int n,a;
    cin>>n;
    vector<int> nums;

    for(int i=0;i<n;i++){
        cin>>a;
        nums.push_back(a);
    }
    int target;
    cin>>target;

    int i = Search(nums, target);
    cout<<i;
}


