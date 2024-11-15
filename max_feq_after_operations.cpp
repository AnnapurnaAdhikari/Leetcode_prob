#include <bits/stdc++.h>
using namespace std;    
//Biweekly Medium level, Not all test case passed: 223 / 633 testcases passed
int maxFrequency(vector<int>& nums, int k, int numOperations) {
        if(numOperations == 0) return 1;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        long long left = 0, right = 0, total = 0;
        int max_freq = 1;
        while(right < n){
            total += nums[right];
            while((right - left + 1)*(long long)nums[right] > total + k){
                total -= nums[left];
                left++;
            }
            max_freq = max(max_freq, (int)(right-left+1));
            right++;
            cout<<max_freq<<" ";
        }
        return max_freq;
    }
int main()
{
    vector<int> nums = {88, 53}; int k = 27, numOperations = 2;
    cout<<maxFrequency(nums,k,numOperations);
}