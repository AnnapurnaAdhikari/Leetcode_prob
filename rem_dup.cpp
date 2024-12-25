#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    vector<int> dup;
    dup.push_back(nums[0]);
    for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i - 1]) {
                dup.push_back(nums[i]);
            }
        }
    for(int j  = 0; j < dup.size(); j++) nums[j] = dup[j];
    return dup.size();
}

// int removeDuplicates(vector<int>& nums) {
//         int j = 1;
//         for(int i = 1; i < nums.size(); i++){
//             if(nums[i] != nums[i - 1]){
//                 nums[j] = nums[i];
//                 j++;
//             }
//         }
//         return j;
//     }

int main(){
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    int num = removeDuplicates(nums);
    cout<< num<<endl;
    for(int s: nums) cout<<s<<" ";
}