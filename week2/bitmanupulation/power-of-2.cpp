// geeksforgeeks

// Given a non-negative integer N. The task is to check if N is a power of 2. More formally, check if N can be expressed as 2x for some x.

// Input: N = 1
// Output: YES
// Explanation:1 is equal to 2 
// raised to 0 (20 = 1).

#include<bits/stdc++.h>
using namespace std;

bool isPowerofTwo(int n){
    if(n==0){
        return false;
    }else if ((n&(n-1))==0)         //consider N = 4 ---> 1000 and N-1 = 3--->0011
    {                                //now N&(N-1) = 0000 (ie if power of two then the and of N and N-1 gives 0)    
       return true; 
    }else{
        return false;
    }
    
}

int main(){
    int N;
    cout<<"enter the integer to be checked"<<endl;
    cin>>N;

    bool result = isPowerofTwo(N);
    cout<<"result : "<<result<<endl;
}