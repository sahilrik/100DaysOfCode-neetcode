// Given an integer array nums, find a contiguous non-empty subarray within the array that has the largest product, and return the product.

// The test cases are generated so that the answer will fit in a 32-bit integer.

// A subarray is a contiguous subsequence of the array.

// Input: nums = [2,3,-2,4]
// Output: 6
// Explanation: [2,3] has the largest product 6.

#include<bits/stdc++.h>
using namespace std;

int maxSubProduct(vector<int> &nums){
    int ans = nums[0];
    int dpmin = nums[0];
    int dpmax = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        const int prevmin = dpmin;
        const int prevmax = dpmax;
        if(nums[i]<0){
            dpmin = min(prevmax*nums[i], nums[i]);
            dpmax = max(prevmin*nums[i], nums[i]);
        }else
        {
            dpmax = max(dpmax*nums[i], nums[i]);
            dpmin = min(dpmin*nums[i], nums[i]);
        }
        ans = max(dpmax, ans);
        
    }
    return ans;
}

int main(){
    vector<int> nums;
    int a,n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"enter the digits in array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        nums.push_back(a);
    }

    int result = maxSubProduct(nums);
    cout<<result<<endl;
    return 0;
    
}