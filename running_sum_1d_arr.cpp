//easy
#include <bits/stdc++.h>
using namespace std;

vector<int> runningSum(vector<int>& nums) {
    vector<int> sum;
    for(int i = 0; i < nums.size(); i++)
    {   int sum_till = 0;
        for(int j = 0; j <= i; j++){
            sum_till += nums[j];
        }
        // cout<<sum_till<<" ";
        sum.push_back(sum_till);
    }
    return sum;
}

int main()
{
    vector<int> nums = {1,2,3,4};
    vector<int> ans = runningSum(nums);
    for(int x: ans) cout<<x<<", ";
    return 0;
}

//this is one of the top solution shown in leetcode, in this they have changed the elements in place int he original list:
//     vector<int> runningSum(vector<int>& nums) {
//          for (int i = 1; i < nums.size(); i++) {
//             // Result at index `i` is sum of result at `i-1` and element at `i`.
//             nums[i] += nums[i - 1];
//         }
//         return nums;
//     }