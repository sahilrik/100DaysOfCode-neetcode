// There is an integer array nums sorted in ascending order (with distinct values).

// Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

// Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

// You must write an algorithm with O(log n) runtime complexity.

// Input: nums = [4,5,6,7,0,1,2], target = 0
// Output: 4

#include<bits/stdc++.h>
using namespace std;

int searchrotated(vector<int> &nums, int target){
    int l = 0;
    int r = nums.size()-1;
    while (l<=r)
    {
        const int mid = l + (r-l)/2;
        if(target == nums[mid]) return mid;

        if (nums[l]<=nums[mid]) //if this is true we are in left sorted array.
        {
            if(target >= nums[l] && target < nums[mid]){
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }else
        {
            if (target<=nums[r] && target>nums[mid]) // we are in right sorted array.
            {
                l = mid + 1;
            }else{
                r = mid -1;
            }
            
        }
        
        
    }
    return -1;
    
}

int main(){
    vector<int> nums;
    int target;
    int a,n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"enter the digits in array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        nums.push_back(a);
    }
    cout<<"enter thr target"<<endl;
    cin>>target;
    
    int result = searchrotated(nums, target);

    cout<<"result : "<<result;
    return 0;
    
}