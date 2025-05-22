#include <iostream>
#include <vector>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    // //Brute Force approach
    // vector<int> positive;
    // vector<int> negative;
    // vector<int> ans;
    // for(int i : nums){
    //     if(i >= 0) positive.push_back(i);
    //     else             negative.push_back(i);
    // }

    // for(int j = 0; j < nums.size()/2; j++){
    //     ans.push_back(positive[j]);
    //     ans.push_back(negative[j]);
    // }

    // return ans;
    //Optimal Approach: using observation that +ve elements are at even positon and -ve are at odd position.
    vector<int> ans(nums.size(), 0);
    int posIdx = 0;
     int negIdx = 1;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] > 0){
            ans[posIdx] = nums[i];
            posIdx += 2;
        }
        else {
            ans[negIdx] = nums[i];
            negIdx += 2;
        }
    }
    return ans;
    
}

int main(){
    vector<int> nums = {3,1,-2,-5,2,-4};
    vector<int> res = rearrangeArray(nums);
    for(int num: res) cout<<num<<" ";
    
}
