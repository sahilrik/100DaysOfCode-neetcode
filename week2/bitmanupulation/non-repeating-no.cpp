// geeksforgeeks  //bitwise XOR

// Given an array A containing 2*N+2 positive numbers, out of which 2*N numbers exist in pairs whereas the other two number occur exactly once and are distinct. Find the other two numbers

// Input: 
// N = 2
// arr[] = {1, 2, 3, 2, 1, 4}
// Output:
// 3 4 
// Explanation:
// 3 and 4 occur exactly once.

#include<bits/stdc++.h>
using namespace std;

vector<int> singleNumber(vector<int> nums){
    vector<int> out;
    int XOR = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        XOR = XOR^nums[i];              //bitwise xor -- ^
    }
    int right_bit = XOR & ~(XOR-1);
    int x,y;
    x=y=0;
    for (int i = 0; i < nums.size(); i++)
    {
        if(nums[i]&right_bit){
            x = x^nums[i];
        }else{
            y = y^nums[i];
        }
    }
    out.push_back(x);
    out.push_back(y);
    sort(out.begin(), out.end());
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
    vector<int> result = singleNumber(nums);
    for (int i = 0; i < result.size(); i++)
    {
        cout<<"result : "<<result[i]<<" "<<endl;
    }
    
    
    return 0;
}