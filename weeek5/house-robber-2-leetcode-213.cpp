// You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed. All houses at this place are arranged in a circle. That means the first house is the neighbor of the last one. Meanwhile, adjacent houses have a security system connected, and it will automatically contact the police if two adjacent houses were broken into on the same night.

// Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.

// Input: nums = [2,3,2]
// Output: 3
// Explanation: You cannot rob house 1 (money = 2) and then rob house 3 (money = 2), because they are adjacent houses.

#include<bits/stdc++.h>
using namespace std;
int helper(vector<int> nums){
    int prev1 = 0;
    int prev2 = 0;      // [prev2, prev1, .......]
    for(auto nums : nums){
        const int dp = max(prev1 , prev2 + nums);
        prev2 = prev1;
        prev1 = dp;
    }
    return prev1;
}

int rob(vector<int>& nums){
    
    int maxx = max(helper(vector<int>(nums.begin(),nums.end()-1)), helper(vector<int>(nums.begin()+1, nums.end())));
    return maxx;
}




int main(){
    vector<int> nums;
    int n,a;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"enter the real arary"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        nums.push_back(a);
    }
    
    int result = rob(nums);

    cout<<"result : "<<result<<endl;

    return 0;
}