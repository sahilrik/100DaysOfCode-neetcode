// Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [0,1,2,4,5,6,7] might become:

// [4,5,6,7,0,1,2] if it was rotated 4 times.
// [0,1,2,4,5,6,7] if it was rotated 7 times.
// Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].

// Given the sorted rotated array nums of unique elements, return the minimum element of this array.

// You must write an algorithm that runs in O(log n) time.

// Input: nums = [3,4,5,1,2]
// Output: 1
// Explanation: The original array was [1,2,3,4,5] rotated 3 times.

#include<bits/stdc++.h>
using namespace std;

int minRotated(vector<int> &nums){
    int out;
    int l = 0;
    int r = nums.size() - 1;

    while (l<=r)
    {
        if (nums[l] < nums[r])
        {
            out = min (nums[l], nums[r]);
            break;
        }
        const int m = l + (r - l) / 2;
        out = min(out, nums[m]);
        if (nums[m]>=nums[l])
        {
            l = m+1;
        }else{
            r = m-1;
        }
        
    }
    return out;
    
}

int main(){
    vector<int> nums;
    int a,n;
    cout<<"enter the no of digits"<<endl;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        nums.push_back(a);
    }

    int result = minRotated(nums);

    cout<<"result: "<< result<<endl;
    return 0;
}