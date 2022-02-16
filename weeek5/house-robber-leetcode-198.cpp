// You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and it will automatically contact the police if two adjacent houses were broken into on the same night.

// Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.


// Example 1:

// Input: nums = [1,2,3,1]
// Output: 4
// Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
// Total amount you can rob = 1 + 3 = 4.

#include<bits/stdc++.h>
using namespace std;

int rob(vector<int> &nums){
    int prev1 = 0;
    int prev2 = 0;      // [prev2, prev1, .......]
    for(auto nums : nums){
        const int dp = max(prev1 , prev2 + nums);
        prev2 = prev1;
        prev1 = dp;
    }
    return prev1;
}

int main(){
    vector<int> nums;
    int a, n;

    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"enter the real array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        nums.push_back(a);
    }
    
    int result = rob(nums);
    cout<<"result : "<<result<<endl;
    return 0;
}