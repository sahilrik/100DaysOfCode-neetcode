// You are given an array for which the ith element is the price of a stock on day i.

// If you could only complete at most one transaction (i.e, buy one and sell one share of the stock), write a function to find the maximum profit.

// Inputs:
//   prices = [7, 1, 5, 3, 6, 4]

// Outputs:
//   5

// We can buy at 1 and then sell at 6 => 6 - 1 = 5;

// Note that the answer is not from 7 - 1, because we cannot buy at 1 and then sell at 7.

#include<bits/stdc++.h>
using namespace std;

int maxprofit(vector<int> &prices){
    int currentmin = INT_MAX;
    int result = 0;
    for (int i = 0; i < prices.size(); i++)
    {
        result = max(result, prices[i]-currentmin);
        currentmin = min(currentmin, prices[i]);
    }
    
    return result;
    
}

int main(){
    vector<int> prices;
    int a = 0;
    cout<<"enter the of array"<<endl;
    for (int i = 0; i < 6; i++)
    {
        cin>>a;
        prices.push_back(a);
    }
    int output = maxprofit(prices);
    cout<<"again :"<<output<<endl;
    
    return 0;
}