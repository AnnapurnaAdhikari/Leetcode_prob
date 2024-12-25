//easy
#include <bits/stdc++.h>
using namespace std;

int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int max = *std::max_element(nums.begin(), nums.end());
        int valid_int = max - 1;
        cout<<"outside loop: valid inp "<<valid_int<<endl;
        int count, sum = 0, min_op = 0;
        do{
            count = 0;
            min_op++;
            for(int  i = 0; i < n; i++){
                if(nums[i] > valid_int) {
                    nums[i] = k;
                    count++;
                }
            }
            max = *std::max_element(nums.begin(), nums.end());
            valid_int = max - 1;
            cout<<"inside loop: valid inp "<<valid_int<<endl;
            
        }while(count > 0);
        for(int x: nums) sum += x;
        if(sum == k*n) return min_op;
        else return -1;
        
    }

int main()
{
    vector<int> nums = {5,2,5,4,5}; int k = 2;
    cout<<minOperations(nums, k);
    return 0;

}