// Reverse bits of a given 32 bits unsigned integer.

// Input: n = 00000010100101000001111010011100
// Output:    964176192 (00111001011110000010100101000000)
// Explanation: The input binary string 00000010100101000001111010011100 represents the unsigned integer 43261596, so return 964176192 which its binary representation is 00111001011110000010100101000000.

#include<bits/stdc++.h>
using namespace std;

int reversebits(int n){
    int res = 0;
    for (int i = 0; i < 32; i++)
    {
        int bit = (n>>i)&1;
        res = res|(bit<<(31-i));
    }
    return res;
    
}

int main(){
    int n;
    cout<<"enter the input"<<endl;
    cin>>n;
    int result = reversebits(n);
    cout<<"result : "<<result;
    return 0;
}