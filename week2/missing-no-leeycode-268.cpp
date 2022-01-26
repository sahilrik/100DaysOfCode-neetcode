// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

// Input: nums = [3,0,1]
// Output: 2
// Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.


#include<bits/stdc++.h>
using namespace std;

int missing(vector<int> &nums){
    int out;
    sort(nums.begin(), nums.end());          // because of this it gives o(nlogn) hence it is a bad soln check bitmanupulation folder
    for (int j = 0; j < nums.size(); j++)
    {
        cout<<nums[j]<<" ";
    }
    
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i]+1 == nums[i+1])
        {
            continue;
        }else{
            out = nums[i]+1;
            break;
        }
        
    }
    return out;
}

int main(){
    vector<int> nums;
    int a,n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"enter the real array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        nums.push_back(a);
    }

    int result = missing(nums);
    cout<<"resulr : "<<result<<endl;
    
    return 0;
}