#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> set;
    vector<int> temp;
    vector<int> temp_pair;
    set.push_back({});
    
    if(nums.size() == 0) return set;
    else{
        for(int i = 0; i < nums.size(); i++)
        {
            set.push_back({nums[i]});
            temp.push_back(nums[i]);
    
        }
        set.push_back(temp);

    }
        
}
//try to use pre built algorithm