// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

// Find two lines that together with the x-axis form a container, such that the container contains the most water.

// Return the maximum amount of water a container can store.

// Notice that you may not slant the container.


// Input: height = [1,8,6,2,5,4,8,3,7]
// Output: 49
// Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.


#include<bits/stdc++.h>
using namespace  std;

int containermostwater(vector<int> &nums){
    int ans = 0;
    int l = 0;
    int r = nums.size()-1;
    while (l<r)
    {
        const int minheight = min(nums[l], nums[r]);
        ans = max(ans, minheight*(r-l));
        if (nums[l]<nums[r])
        {
            l++;
        }else{
            r--;
        }
        
    }
    return ans;
}

int main(){
    vector<int> nums;
    int a,n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"enter thr real array"<<endl;
    for (int  i = 0; i < n; i++)
    {
        cin>>a;
        nums.push_back(a);
    }
    int result = containermostwater(nums);
    cout<<"result : "<<result;
    return 0;
}