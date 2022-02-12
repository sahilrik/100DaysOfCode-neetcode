// Given two strings text1 and text2, return the length of their longest common subsequence. If there is no common subsequence, return 0.

// A subsequence of a string is a new string generated from the original string with some characters (can be none) deleted without changing the relative order of the remaining characters.

// For example, "ace" is a subsequence of "abcde".
// A common subsequence of two strings is a subsequence that is common to both strings.

 
// Example 1:

// Input: text1 = "abcde", text2 = "ace" 
// Output: 3  
// Explanation: The longest common subsequence is "ace" and its length is 3.

#include<bits/stdc++.h>
using namespace std;

int longestCommonSubsequence(string text1, string text2){
    const int m = text1.length();
    const int n = text2.length();
    // dp[i][j] := LCS's length of text1[0..i) and text2[0..j)
    vector<vector<int>> dp(m + 1, vector<int>(n + 1));

    for (int i = 1; i <= m; ++i)
      for (int j = 1; j <= n; ++j)
        if (text1[i - 1] == text2[j - 1])
          dp[i][j] = 1 + dp[i - 1][j - 1];
        else
          dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);

    return dp[m][n];
}

int main(){
    string text1;
    string text2;

    cout<<"enter the text1"<<endl;
    getline(cin, text1);
    cout<<"enter the text2"<<endl;
    getline(cin, text2);

    int result = longestCommonSubsequence(text1, text2);
    cout<<"result : "<<result<<endl;

    return 0;
}
