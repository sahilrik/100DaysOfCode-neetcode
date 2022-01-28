//geeks for geeks

// Given a positive integer N, print count of set bits in it. 

// Input:
// N = 6
// Output:
// 2
// Explanation:
// Binary representation is '110' 
// So the count of the set bit is 2.

#include<bits/stdc++.h>
using namespace std;

int setBit(int input){
    int count = 0;
    while (input)
    {
        int bit = input&1;
        if(bit){
            count++;
        }
        input = input>>1;
    }
    return count;
}

int main(){
    int input;
    cout<<"enter thr digit"<<endl;
    cin>>input;

    int result = setBit(input);
    cout<<"result : "<<result<<endl;
    return 0;
}