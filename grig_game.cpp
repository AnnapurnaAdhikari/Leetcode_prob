#include <bits/stdc++.h>
using namespace std;

long long gridGame(vector<vector<int>>& grid) {
    long long I_r_sum = accumulate(grid[0].begin(), grid[0].end(), 0LL);
    long long II_r_sum = 0;
    long long min_sum = LONG_LONG_MAX;

    for(int  i = 0; i < grid[0].size(); i++){
        I_r_sum -= grid[0][i];
        long long maxi = max(I_r_sum, II_r_sum);
        min_sum = min(min_sum, maxi);
        II_r_sum += grid[1][i];
    }
    return min_sum;
    }
int main(){
    vector<vector<int>> grid = {{1,3,1,15},{1,3,3,1}}; //output: 7
    cout<<gridGame(grid)<<endl;
    return 0;
}