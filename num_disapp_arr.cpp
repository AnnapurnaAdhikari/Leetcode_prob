#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums) {
        int len = nums.size();
        vector<int>num_disappear;
        vector<int>num_count(len+1, 0);
        //1st method//timelimit exceeded
        // sort(nums.begin(), nums.end());
        // for(int j  = 1; j  <= len; j++){
        //     bool flag = false;
        //     for(int x: nums){
        //         if(j == x) flag = true;
        //     }
        //     // cout<<"flag: "<<flag<<" ";
        //     if(flag == false) num_disappear.push_back(j);
        // }

        //2nd method//timelimit exceeded
        // int j;
        //  for(int j  = 1; j  <= len; j++){
        //     auto it = find(nums.begin(), nums.end(), j);
        //     if(it == nums.end()) num_disappear.push_back(j);
        //  }

        //3rd method
        for(int x: nums) num_count[x]++;
        for(int i = 1; i <= len; i++)
        {
            if(num_count[i] == 0) num_disappear.push_back(i);
        }
        return num_disappear;
        //4th method -> using hashmap(kal karuunga abhi neend aa ri)
    }

int main()
{
    vector<int> n = {4,3,2,7,8,2,3,1}; //{5,6}
    vector<int> n2 = {1,1};
    vector<int> ans2 = findDisappearedNumbers(n2);
    vector<int>ans = findDisappearedNumbers(n);
    for (int x: ans) cout<<x<<" ";
    for (int x: ans2) cout<<x<<" ";
    return 0;
}