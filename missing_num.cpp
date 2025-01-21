#include <bits/stdc++.h>
using namespace std;

int missingNumber01(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int  i = 0; i < n; i++){
            if(nums[i] != i) return i;
        }
        if(nums[n - 1] != n) return n;
        return -1;
    }
int missingNumber02(vector<int>& nums){
    int n = nums.size();
    int expected_sum = n*(n+1)/2;
    int actual_sum = 0;
    for(int x: nums) actual_sum += x;
    return expected_sum - actual_sum;
}