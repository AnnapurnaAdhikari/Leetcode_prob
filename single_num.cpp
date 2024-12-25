#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        unordered_map<int, int> hashMap;
        for(int x: nums){
            hashMap[x] = 1;
        }

        for(auto x: hashMap){
            if(x.second == 1) return x.first;
        }
        return 1;
    }
int main()
{
    vector<int>nums = {4,1,2,1,2};
    singleNumber(nums)
}
