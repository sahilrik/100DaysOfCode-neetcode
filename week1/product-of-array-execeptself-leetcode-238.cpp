// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

// You must write an algorithm that runs in O(n) time and without using the division operation.


// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]

#include<bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector <int> &nums){
    const int n = nums.size();
    vector<int> output(n,1);
    //prefix 1 1 2 6
    for (int i = 1; i < n; i++)
    {
        output[i] = output[i-1]*nums[i-1];
    }
    
    // suffix ->convert output-> 24 12 8 6
    int suffix = 1;
    for (int i = n-1; i >= 0; i--)
    {
        output[i] *= suffix;
        suffix *= nums[i];
    }
    return output;
    
}

int main(){
    vector<int> nums;
    int a;
    int n;
    cout<<"enter thr size of array"<<endl;
    cin>>n;
    cout<<"enter the digits of array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        nums.push_back(a);
    }

    vector<int> result = productExceptSelf(nums);
    cout<<"result :";
    for (int i = 0; i < n; i++)
    {
        printf(" ");
        cout<<result[i];
    }
    
    
}