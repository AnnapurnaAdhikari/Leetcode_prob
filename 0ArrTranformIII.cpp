#include <bits/stdc++.h>
using namespace std;

// int maxRemoval(vector<int>& nums, vector<vector<int>>& queries) {
    
//     int ans = 0 ;
//     int sum = 0; 
//  for(int i = 0; i < queries.size(); i++){
//             sum = 0;
//             for(int k = queries[i][0]; k <= queries[i][1]; k++){
//                 if(nums[k] != 0) nums[k] -= 1; 
//             }
//             sum = accumulate(nums.begin(), nums.end(), 0);
//             if(queries[i][0] == queries[i][1] && nums[queries[i][0]] == 0) ans++;
//             cout<<"ans = "<<ans<<endl;
//             if(sum == 0) {
//                 ans += queries.size() - i - 2;
//                 return ans;}
//         }
//         // if(sum == 0) return ans;
//         return -1;

//     }


    int maxRemoval(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        priority_queue<int,vector<int>,greater<int>> used_query;//Minheap
        priority_queue<int> available_query;//Maxheap
        sort(queries.begin(),queries.end());//Sort queries by start-point

        //Process all points
        int query_pos = 0;
        int applied_count = 0;
        for(int i=0;i<n;++i){
            //Push all queries starting at i
            while(query_pos<queries.size() and queries[query_pos][0]==i){
                available_query.push(queries[query_pos][1]);
                query_pos++;
            }
            //Previously used_query overlapping with i must be adjusted
            nums[i] -= used_query.size();

            //Apply query if needed
            while(nums[i]>0 and !available_query.empty() and available_query.top()>=i){
                used_query.push(available_query.top());
                available_query.pop();
                nums[i]--;
                applied_count++;
            }
            //If we couldn't manage enough queries
            if(nums[i]>0)   return -1;

            //Remove all queries used and ending at i
            while(!used_query.empty() and used_query.top()==i)
                used_query.pop();
        }
        return queries.size() - applied_count;
    }
int main()
{
    // vector<int> nums = {2,0,2}; vector<vector<int>> queries = {{0,2},{0,2},{1,1}};
    // vector<int> nums = {1,1,1,1}; vector<vector<int>> queries = {{1,3},{0,2},{1,3},{1,2}};
    vector<vector<int>> queries = {{0,1},{0,0},{0,1},{0,1},{0,0}};
    vector<int> nums = {0, 3};
    cout<<maxRemoval(nums, queries);
    return 0;
}