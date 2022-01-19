// Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

// A subarray is a contiguous part of an array

// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: [4,-1,2,1] has the largest sum = 6.

#include<bits/stdc++.h>
using namespace std;

int maxsubarr(vector<int> &nums){
    int sum = 0;
    int maxx = INT_MIN;
    for(auto it: nums){
        sum += it;
        maxx = max(maxx,sum);
        if(sum<=0){
            sum=0;
        }

    }
    return sum;
}

int main(){
    vector<int> nums;
    int a, n;
    cout<<"enter the no od digits"<<endl;
    cin>>n;
    cout<<"enter the array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        nums.push_back(a);

    }

    int result = maxsubarr(nums);
    cout<<"result: "<<result;

    
}