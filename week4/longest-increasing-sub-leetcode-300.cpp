// Given an integer array nums, return the length of the longest strictly increasing subsequence.

// A subsequence is a sequence that can be derived from an array by deleting some or no elements without changing the order of the remaining elements. For example, [3,6,2,7] is a subsequence of the array [0,3,1,6,2,2,7].


// Input: nums = [10,9,2,5,3,7,101,18]
// Output: 4
// Explanation: The longest increasing subsequence is [2,3,7,101], therefore the length is 4.

//THIS CAN BE DONE BY BINARY SEARCH WITH n(logn) COMPLEXITY----HERE IT IS DONE BY DP.

#include<bits/stdc++.h>
using namespace std;

int lengthOfLIS(vector<int> &nums){
    vector<int> dp(nums.size(), 1);
    for (int i = 1; i < nums.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            if(nums[j]<nums[i]){
                dp[i] = max(dp[i], 1+dp[j]);
            }
        }
        
    }
    return *max_element(begin(dp), end(dp));// search why there  is a *
}

int main(){
    vector<int> nums;
    int n, a;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"enetr the real arary"<<endl;

    for (int i = 0; i < n; i++)
    {
        cin>>a;
        nums.push_back(a);
    }
    int result = lengthOfLIS(nums);
    cout<<"result : "<<result<<endl;
    return 0;
}