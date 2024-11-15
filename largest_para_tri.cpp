//976. Largest Perimeter Triangle
//Given an integer array nums, return the largest perimeter of a triangle with a non-zero area,
// formed from three of these lengths. 
//If it is impossible to form any triangle of a non-zero area, return 0.
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
//if we do this question from last lement than it becomes less compilated than this.
int largestPerimeter(vector<int>& nums) {
        if(nums.size() < 3) return 0;
        sort(nums.begin(), nums.end());
        if(nums.size() == 3) 
        {
            if (nums[0] + nums[1] <= nums[2]) return 0;
            else return accumulate(nums.begin(), nums.end(), 0);
        }
        int peri = 0, temp, t_idx;
        vector<int>temp_tri(3);
        for(int i = 0; i < nums.size() - 3 + 1; i++)
        {
            if(nums[i] + nums[i + 1] > nums[i + 2])
            {   t_idx = 0;
                for(int j = i; j < i + 3; j++)
                {
                    temp_tri[t_idx++] = nums[j];

                }
                temp = accumulate(temp_tri.begin(), temp_tri.end(), 0);
                if(peri < temp) peri = temp;
            }
        }
        // for(int  i = 0; i < 3; i++) cout<<temp_tri[i]<<" ";
        if(peri != 0) return peri;
        return 0;
    }
int main()
{   vector <int>nums = {1,2,1, 10};
    vector<int>n2 = {3,2,3,4};
    cout<<largestPerimeter(n2);
    return 0;
}