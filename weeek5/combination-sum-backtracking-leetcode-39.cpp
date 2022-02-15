// Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

// The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the frequency of at least one of the chosen numbers is different.

// It is guaranteed that the number of unique combinations that sum up to target is less than 150 combinations for the given input.


// Example 1:

// Input: candidates = [2,3,6,7], target = 7
// Output: [[2,2,3],[7]]
// Explanation:
// 2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.
// 7 is a candidate, and 7 = 7.
// These are the only two combinations.

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> ans;

    sort(begin(candidates), end(candidates));
    dfs(candidates, 0, target, {}, ans);
    return ans;
  }

 
  void dfs(const vector<int>& A, int s, int target, vector<int>&& path,
           vector<vector<int>>& ans) {
    if (target < 0)
      return;
    if (target == 0) {
      ans.push_back(path);
      return;
    }

    for (int i = s; i < A.size(); ++i) {
      path.push_back(A[i]);
      dfs(A, i, target - A[i], move(path), ans);
      path.pop_back();
    }
  }

int main(){
    vector<int> candidates;
    int n, a;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"enter the real array "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        candidates.push_back(a);
    }
    
}

//study backtracking 