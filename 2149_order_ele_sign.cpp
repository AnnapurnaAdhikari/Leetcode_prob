#include <iostream>
#include <vector>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    //Brute Force approach
    vector<int> positive;
    vector<int> negative;
    vector<int> ans;
    for(int i : nums){
        if(i >= 0) positive.push_back(i);
        else             negative.push_back(i);
    }

    for(int j = 0; j < nums.size()/2; j++){
        ans.push_back(positive[j]);
        ans.push_back(negative[j]);
    }

    return ans;
    
}

int main(){
    vector<int> nums = {3,1,-2,-5,2,-4};
    vector<int> res = rearrangeArray(nums);
    for(int num: res) cout<<num<<" ";
    
}
