#include <iostream>
#include <vector>
using namespace std;


int maximumWealth(vector<vector<int>>& accounts) {
        int sum  = 0;
        for(int i = 0; i < accounts.size(); i++)
        {
            int t_wealth = 0;
            for(int j = 0; j < accounts[i].size(); j++) t_wealth += accounts[i][j];
            if(sum <= t_wealth) sum = t_wealth;
        }
        return sum;
    }

int main()
{
    vector<vector<int>> acc = {{1,2,3}, {3,2,1}};
    cout<<maximumWealth(acc)<<" ";
    return 0;
}