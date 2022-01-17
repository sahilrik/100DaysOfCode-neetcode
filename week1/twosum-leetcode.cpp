// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].



#include<bits/stdc++.h>
using namespace std;

vector<int> twosum(vector<int>& nums, int target){
    vector<int> output;
    unordered_map<int, int> mpp;
    for (int i = 0; i < nums.size(); i++)
    {
        if(mpp.find(target-nums[i])!= mpp.end()){
            output.push_back(mpp[target-nums[i]]);
            output.push_back(i);
            return output;
        }
        mpp[nums[i]] = i;
    }
    return output;
}

int main(){

    vector<int> nums;
    int input = 0;
    int target;
    cout<<"input the target"<<endl;
    cin>>target;
    cout<<"enter the digits in array"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>>input;
        nums.push_back(input);
    }

    vector<int> pair = twosum(nums, target);
    cout<<"pair indices are: "<<pair[0]<< " "<<pair[1]<<endl;

    return 0;
}