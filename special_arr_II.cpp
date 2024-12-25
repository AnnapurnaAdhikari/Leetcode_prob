#include <bits/stdc++.h>
using namespace std;
//535 / 536 testcases passed

vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
    
        vector<bool> parity_chk;
        int count, j;
        for(int i = 0; i < queries.size(); i++){
            count = 0;
            bool is_special = true;
            cout<<"i: "<<i<<endl;
            for( j = queries[i][0]; j < queries[i][1]; j++){
                if ((nums[j] % 2 == 0 && nums[j + 1] % 2 == 0) || (nums[j] % 2 != 0 && nums[j + 1] % 2 != 0)) {
                    parity_chk.push_back(false);
                    is_special = false;
                    break;  
                }
                else{
                        count++;  
                        cout<<"inside else count:"<<count<<endl;
                    }
            }
            cout<<"count: "<<count<<" j: "<<j<<endl;
            if (is_special) parity_chk.push_back(true);
        }
        return parity_chk;
    }

int main(){
    // vector<int>nums ={3,4,1,2,6}; vector<vector<int>> queries = {{0,4}};
    vector<int> nums = {4,3,1,6}; vector<vector<int>> queries = {{0,2},{2,3}};
    vector<bool> ans = isArraySpecial(nums, queries);
    for(bool x: ans){
        cout<<x<<endl;
    }
    return 0;
}