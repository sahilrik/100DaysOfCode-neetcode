// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

// Input: nums = [1,2,3,1]
// Output: true

#include<bits/stdc++.h>
using namespace std;

void contains(vector<int> &nums){
    unordered_set<int> hashset;
    int flag = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if(hashset.find(nums[i])!= hashset.end()){
            flag = 1;
            break;
        }
        hashset.insert(nums[i]);
    }
    if (flag == 1)
    {
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
    
    
}

int main(){
    vector<int> nums;
    int a;
    cout<<"enter the array"<<endl;
    for (int  i = 0; i < 4; i++)
    {
        cin>>a;
        nums.push_back(a);
    }
    contains(nums);
    return 0;
}