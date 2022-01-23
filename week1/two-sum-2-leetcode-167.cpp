// Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.

// Return the indices of the two numbers, index1 and index2, added by one as an integer array [index1, index2] of length 2.

// The tests are generated such that there is exactly one solution. You may not use the same element twice.

// Input: numbers = [2,7,11,15], target = 9
// Output: [1,2]
// Explanation: The sum of 2 and 7 is 9. Therefore, index1 = 1, index2 = 2. We return [1, 2].

#include<bits/stdc++.h>
using namespace std;

vector<int> sumtwosecond(vector<int> &nums, int target){
    vector<int> out;
    int l = 0;
    int r = nums.size()-1;
    while (nums[l] + nums[r] != target)
    {
        if(nums[l] + nums[r]<target){
            l--;
        }else{
            r--;
        }
    }
    out.push_back(l+1);
    out.push_back(r+1);
    return out;
}

int main(){
    vector<int> nums;
    int a,n;
    int target;
    cout<<"enter the size of arary"<<endl;
    cin>>n;
    cout<<"enter the array "<<endl;
    for (int  i = 0; i < n; i++)
    {
        cin>>a;
        nums.push_back(a);
    }
    cout<<"enter the target"<<endl;
    cin>>target;

    vector<int> pair = sumtwosecond(nums, target);

    cout<<"result :"<<endl;
    cout<<pair[0]<< ", "<<pair[1];
    return 0;
}