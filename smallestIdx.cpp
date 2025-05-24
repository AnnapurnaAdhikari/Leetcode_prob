#include <bits/stdc++.h>
using namespace std;

int digSum(int num){
        int sum = 0;
        while(num > 0){
            int rem = num%10;
            sum += rem;
            num /= 10;
        }
        return sum;
    }
    
    int smallestIndex(vector<int>& nums) {
        vector<int> minIdxs;
        for(int i = 0; i < nums.size(); i++){
            if(i == digSum(nums[i])) minIdxs.push_back(i);
        }
        if(minIdxs.size() == 0) return -1;
        sort(minIdxs.begin(), minIdxs.end());
        return minIdxs[0];
        
        
    }
int main(){
    vector<int> nums = {1, 3, 2};
    cout<<smallestIndex(nums);
    return 0;
}