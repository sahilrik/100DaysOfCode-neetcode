// dp(o(n2)) and greedy(o(n))

// You are given an integer array nums. You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position.

// Return true if you can reach the last index, or false otherwise.

// Input: nums = [2,3,1,1,4]
// Output: true
// Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.

#include<bits/stdc++.h>
using namespace std;
bool canJump(vector<int> &nums){
    int goal = nums.size();
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        if(i + nums[i] >= goal){
            goal = i;
        }
    }
    if (goal == 0)
        {
            return true;
        }else{
            return false;
    }
        
}

int main(){
    vector<int> nums;
    int n, a;
    cout<<"enter the the length of input"<<endl;
    cin>>n;
    cout<<"enter the real array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        nums.push_back(a);
    }
    bool result = canJump(nums);
    cout<<"result : "<< result<<endl;
    return 0;
}