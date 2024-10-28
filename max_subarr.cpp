#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
    //Kadane's algo O(n)
        // int max_sum = 0;
        // int curr_sum = 0;
        // for(int x: nums)
        // {
        //     curr_sum = max(x, curr_sum + x);
        //     max_sum = max(max_sum, curr_sum);
        // }
        // return max_sum;
        //Naive approach O(n^2)
      int res = nums[0];
      for(int i = 0; i < nums.size(); i++) {
        int currSum = 0;
        for(int j = i; j < nums.size(); j++) {
            currSum = currSum + nums[j];
            res = max(res, currSum);
        }
    }
    return res;
}

int main()
{
    vector<int> n = {-2,1,-3,4,-1,2,1,-5,4};
    cout<<maxSubArray(n);
    return 0;
}