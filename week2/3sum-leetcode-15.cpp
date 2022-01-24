// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

// Notice that the solution set must not contain duplicate triplets.

// Input: nums = [-1,0,1,2,-1,-4]
// Output: [[-1,-1,2],[-1,0,1]]

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> sumthree(vector<int> &nums){
    if (nums.size() < 3)
    {   
        
        return{};
    }
    
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size()-2; i++)
    {   
        
        if(i>0 && nums[i]==nums[i-1]){
            continue;
        }

        int l = i + 1;
        int r = nums.size()-1;
        while (l<r)
        {
            const int sum = nums[i] + nums[l] + nums[r];
            if(sum == 0){
                ans.push_back({nums[i], nums[l++], nums[r--]});
                while (l<r && nums[l]==nums[l-1])
                {
                    ++l;
                }
                while (l<r && nums[r] == nums[r+1])
                {
                    --r;
                }
                
                
            }else if (sum < 0)
            {
                l++;
            }else{
                r++;
            }
            
        }
        
    }
    return ans;
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
    
    vector<vector<int>> result = sumthree(nums);
    

    //displaying
    for (int i = 0; i < result.size(); i++)
    {   
        
        for (int j = 0; j < result[i].size(); j++)
        {
            cout<<result[i][j]<< " ";
        }
        cout<<endl;
        
    }
    
    return 0;
}