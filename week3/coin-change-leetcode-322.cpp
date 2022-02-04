// You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.

// Return the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1.

// You may assume that you have an infinite number of each kind of coin.


// Input: coins = [1,2,5], amount = 11
// Output: 3
// Explanation: 11 = 5 + 5 + 1


#include<bits/stdc++.h>
using namespace std;

int coinChange(vector<int> &coins, int amount){
    vector<int> dp(amount+1, amount+1);
    dp[0] = 0;   // dp[i] := fewest # of coins to make up i

    for (int i = 1; i <= amount; i++)
    {
        for (auto &&coin : coins)
        {
            if(coin<=i){
                dp[i] = min(dp[i], dp[i-coin]+1);   //dp[i-coin]+1 cause we need min of 1 coin and then dp[7-4] #from_example
            }
        }
        
    }
    return dp[amount] == amount+1 ? -1:dp[amount];
    
}

int main(){
    vector<int> coins;
    int amount;
    int n,a;
    cout<<"enterh the amount"<<endl;
    cin>>amount;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"enter the array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        coins.push_back(a);
    }

    int result = coinChange(coins, amount);
    cout<<"result : "<<result<<endl;
    
    return 0;
}