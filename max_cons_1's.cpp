#include <bits/stdc++.h>
#include <vector>
#include <deque>
using namespace std;

int longest_ones01(vector<int>& nums, int k){
    int l = 0, r = 0;
    int zero = 0;
    int max_len = 0;
    while(r < nums.size()){ //expand window
        if(nums[r] == 0) zero++;

        while(zero > k){ //shrink window
            if(nums[l] == 0) zero--;
            l++;
        }

        max_len = max(max_len, r - l + 1);
        r++;
    }
    return max_len;
}
//best 0ms
int longest_ones(vector<int>& nums, int k) {
        int oneCount = 0, zeroCount = 0, lo = 0, hi = -1, best = 0;
        int n = nums.size();
        while (hi < n) {
            while (zeroCount > k && lo < n) {
                if (nums[lo] == 0)
                    zeroCount--;
                else
                    oneCount--;
                lo++;
            }
            // cout << zeroCount << " " << oneCount << " " << lo << " " << hi << endl; 
            // while (zeroCount < k && hi < nums.size() - 1) {
            //     hi++;
            //     if (nums[hi] == 0)
            //         zeroCount++;
            //     else
            //         oneCount++;
            // }
            // cout << zeroCount << " " << oneCount << " " << lo << " " << hi << endl; 
            best = max(best, hi - lo + 1);
            hi++;
            if(hi < nums.size()) {
                if (nums[hi] == 0)
                        zeroCount++;
                else
                    oneCount++;
            }
        }
        return best;
    }

int main()
{
    vector<int> nums = {0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1}; 
    int k = 3;
    cout<<longest_ones(nums,k);
    return 0;
}