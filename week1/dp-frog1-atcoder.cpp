//question is on atcoder search-> A-frog-1


//sample input
// 4
// 10 30 40 20

//sample output
//30



// #include<bits/stdc++.h>
// using namespace std;

// int frogs(vector<int> &nums){
//     int n = nums.size();
//     vector<int> minCost;
//     minCost[1] = abs(nums[1]-nums[0]);
//     for (int i = 2; i < n; i++)
//     {
//         minCost[i] = min(minCost[i-1] + abs(nums[i]-nums[i-1]), abs(nums[i-1]-nums[i-2]));
//     }
//     cout<<"result: "<<minCost[n-1];
//     return minCost[n-1];

// }

// int main(){
//     vector<int> nums;
//     int a,n;
//     cout<<"enter the size of array"<<endl;
//     cin>>n;
//     cout<<"enter the digits in array"<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a;
//         nums.push_back(a);
//     }

//     int result = frogs(nums);
//     cout<<endl;
//     cout<<result;
    
//     return 0;
// }

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int no_of_stones;
    cin >> no_of_stones;

    vector <int> height(no_of_stones + 1, 0);
    for(int i = 1; i <= no_of_stones; i++)
        cin >> height[i];

    vector <int> minimum_cost(no_of_stones + 1);
    minimum_cost[2] = abs(height[2] - height[1]);
    for(int i = 3; i <= no_of_stones; i++)
        minimum_cost[i] = min(minimum_cost[i - 1] + abs(height[i] - height[i - 1]),
                              minimum_cost[i - 2] + abs(height[i] - height[i - 2]));

    cout << minimum_cost[no_of_stones]<<endl;
    cout<<minimum_cost[1];
    for (int i = 0; i < minimum_cost.size(); i++) {
        cout<<minimum_cost[i];
    }
    return 0;
}