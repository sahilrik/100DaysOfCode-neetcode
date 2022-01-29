// geeksforgeeks

// Given a number N having only one ‘1’ and all other ’0’s in its binary representation, find position of the only set bit. If there are 0 or more than 1 set bit the answer should be -1. Position of  set bit '1' should be counted starting with 1 from LSB side in binary representation of the number.

// Input:
// N = 2
// Output:
// 2
// Explanation:
// 2 is represented as "10" in Binary.
// As we see there's only one set bit
// and it's in Position 2 and thus the
// Output 2.

#include<bits/stdc++.h>
using namespace std;

int findPosition2(int n){           // search for the time complexity of log2() function 
        int count = 0;
    if(n == 0){
        return -1;
    }else if((n&(n-1))==0){
        count =log2(n)+1;       // mathematical method 
        return count;
    }else{
        return -1;
    }
}

int findPosition(int n){
    int count = 0;
    if(n == 0){
        return -1;
    }else if((n&(n-1))==0){         // only 2^n type integers have one 1s in them 
        while (n)                   // eg 4 - 100  8 - 1000
        {
            count++;
            n=n>>1;
        }
        return count;
    }else{
        return -1;
    }
}

int main(){
    int n;
    cout<<"enter the digit"<<endl;
    cin>>n;
    int result = findPosition2(n);
    cout<<"result : "<<result<<endl;
    return 0;
}