// targate sum - dynamic problem 

// You are given an integer array nums and an integer target.

// You want to build an expression out of nums by adding one of the symbols '+' and '-' before each integer in nums and then concatenate all the integers.

// For example, if nums = [2, 1], you can add a '+' before 2 and a '-' before 1 and concatenate them to build the expression "+2-1".
// Return the number of different expressions that you can build, which evaluates to target.

// Example 1:

// Input: nums = [1,1,1,1,1], target = 3
// Output: 5
// Explanation: There are 5 ways to assign symbols to make the sum of nums be target 3.
// -1 + 1 + 1 + 1 + 1 = 3
// +1 - 1 + 1 + 1 + 1 = 3
// +1 + 1 - 1 + 1 + 1 = 3
// +1 + 1 + 1 - 1 + 1 = 3
// +1 + 1 + 1 + 1 - 1 = 3

#include<bits/stdc++.h>
using namespace std;

int findTargateSum(vector<int> &nums, int targate){
    
}

int main(){
    vector<int> nums;
    int a , n , targate;
    cout<<"enetr the sizeof array"<<endl;
    cin>>n;
    cout<<"enter the real array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        nums.push_back(a);
    }
    cout<<"enetr the targate"<<endl;
    cin>>targate;

    int result = findTargateSum(nums, targate);

    cout<<"result :"<<result<<endl;
    return 0 ;
}