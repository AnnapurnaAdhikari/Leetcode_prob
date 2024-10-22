#include <iostream>
#include <vector>
using namespace std;


vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices;
        for(int i = 0; i < nums.size() - 1; i++)
        {
            for(int j = i + 1; j < nums.size(); j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    // indices.push_back(i);
                    // indices.push_back(j);
                    indices = {i, j};
                }
            }
            if(indices.size() == 2) return indices;
        }
    }

int main()
{
    vector<int> n = {2,7,11,15};
    vector<int> n2 = {3,2,4};
    int t = 9;
    int t2 = 6;
    vector<int> ans = twoSum(n, t);
    vector<int> ans2 = twoSum(n2, t2);
    for(int x: ans) cout<<x<<" ";
    for(int x: ans2) cout<<x<<" ";
    return 0;
}