// You are climbing a staircase. It takes n steps to reach the top.

// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

// Input: n = 2
// Output: 2
// Explanation: There are two ways to climb to the top.
// 1. 1 step + 1 step
// 2. 2 steps

#include<bits/stdc++.h>                                     //time - o(n)
using namespace std;                                        //space - o(1);
int climbingstairs(int n){
    int dp;
    int prev1 = 1;
    int prev2 = 1;
    for (int i = 2; i <= n; i++)
    {
        const int dp = prev1 + prev2;
        //cout<<"dp :"<<dp<<" ";
        prev2 = prev1;
        prev1 = dp;
        //cout<<"after dp :"<<dp <<" ";
    }
    //cout<<"dp super after : "<<dp<<" ";
    return prev1;
}

int main(){
    int n;
    cout<<"enter a no "<<endl;
    cin>>n;
    
    int result = climbingstairs(n);
    cout<<"result : "<<result<<endl;
    return 0;
}

