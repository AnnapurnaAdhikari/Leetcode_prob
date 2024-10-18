#include <iostream>
#include <vector>
using namespace std;

int arraySign(vector<int>& nums) {
        int count_sign = 0;
        for (int  i = 0; i < nums.size(); i++)
        {
            if (nums[i] < 0) count_sign++;
            else if(nums[i] == 0) return 0;
        }
        if (count_sign % 2 == 0) return 1;
        else return -1;
    }

int main()
{
    vector<int> nums = {-1,-2,-3,-4,3,2,1};
    cout << arraySign(nums);
    return 0;
}