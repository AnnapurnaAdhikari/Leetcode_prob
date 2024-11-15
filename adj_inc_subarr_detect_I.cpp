#include<bits/stdc++.h>
using namespace std;
//weekly easy level
bool hasIncreasingSubarrays(vector<int>& nums, int k) {
    int ini_idx, adj_idx, i_count = 0, adj_count = 0;
        for(int i = 0; i < nums.size() - k + 1; i++)
        {
            for(int j = i; j < k+i-1; j++)
            {   
                if(nums[j] < nums[j+1])
                {
                    ini_idx = i;
                    i_count++;
                    continue;
                } 
                break;
            }
            if (i_count == k) adj_idx = ini_idx + k;
            else continue;
        }
        for(int i = 0; i < nums.size() - k + 1; i++)
        {
            for(int j = adj_idx; j < k+adj_idx-1; j++)
            {   
                if(nums[j] < nums[j+1])
                {
                    adj_count++;
                    continue;
                } 
                break;
            }
            if(adj_count == k) return true;
            else continue; 
        }
        return false;
    }
int main()
{
    vector<int> nums = {2,5,7,8,9,2,3,4,3,1}; int k = 3;
    cout<<hasIncreasingSubarrays(nums, k);
    return 0;
}