// geeksforgeeks

// Calculate the square of a number without using *, / and pow()

// Input: N = 4
// Output: 16
// Explanation:
// 4*4 = 16

#include<bits/stdc++.h>
using namespace std;

int square(int n){
    int out = 0;
    int temp = abs(n);
    int pos = 0;
    while(temp){
        if(temp&1){
            out = out + (n<<pos);
        }
        pos++;
        temp = temp>>1;
    }
    return out;
}

int main(){
    int n;
    cin>>n;

    int result = square(n);
    cout<<"result :"<<result;
    return 0;
}