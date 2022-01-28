// count th eno of bits to be fliped to change A to B
// geeksforgeeks

// You are given two numbers A and B. The task is to count the number of bits needed to be flipped to convert A to B.

// Input: A = 10, B = 20
// Output: 4
// Explanation:
// A  = 01010
// B  = 10100
// As we can see, the bits of A that need 
// to be flipped are 01010. If we flip 
// these bits, we get 10100, which is B.

#include<bits/stdc++.h>
using namespace std;

int countBitFlip(int a, int b){
    int count = 0;
    int temp ;
    temp = a^b;
    while (temp)
    {
        int bit = temp&1;
        if(bit){
            count++;
        }
        temp = temp>>1;
    }
    return count;
}

int main(){
    int a,b;
    cout<<"enter A first then B"<<endl;
    cin>>a;
    cin>>b;
    int result = countBitFlip(a,b);
    cout<<"result : "<<result<<endl;
    return 0;
}