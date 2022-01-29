// geeksforgeeks

// Given a string S find all possible subsequences of the string in lexicographically-sorted order.

// Input : str = "abc"
// Output: a ab abc ac b bc c
// Explanation : There are 7 substrings that 
// can be formed from abc.

#include<bits/stdc++.h>
using namespace std;

vector<string> AllPossibleStrings(string str){
    vector<string> output;
    int n = pow(2,str.length());
    for (int i = 1; i < n; i++)
    {
        int x = i;
        int y = 0;
        string c = "";
        while (x)
        {
            if(x&1){
                c = c + str[y];
            }
            y++;
            x = x>>1;
        }
        output.push_back(c);
    }
    sort(output.begin(), output.end());
    return output;
}

int main(){
    string str;
    cin>>str;
    
    vector<string> result = AllPossibleStrings(str); 
    for (int i = 0; i < pow(2,str.length()); i++)
    {
        cout<<result[i]<<" ";
    }
    
    return 0;
}