
#include <iostream>
#include <vector>
using namespace std;

bool isMonotonic(vector<int>& nums) {
       int len = nums.size();
       if(nums[0] <= nums[len - 1])
       {
        for(int  i = 1; i < len; i++)
        {
            if(!(nums[i - 1] <= nums[i])) return false;
        }
        return true;
       }
       else{
        for(int  i = 1; i < len; i++)
        {
            if(!(nums[i - 1] >= nums[i])) return false;
        }
        return true;
       }
}

int main()
{
    vector<int> n = {1,2,2,3};
    vector<int> m = {6,5,4,4};
    vector<int> p = {1,3,2};
    cout<<isMonotonic(n)<<" ";
    cout<<isMonotonic(m)<<" ";
    cout<<isMonotonic(p)<<" ";
    return 0;
}