#include <iostream>
#include <vector>
using namespace std;

int diagonalSum(vector<vector<int>>& mat) {
    int sum_d = 0;
    int len = mat.size();
    if(len == 1) return mat[0][0];
    for(int i = 0; i < len; i++)
    {
        for(int j = 0; j < len; j++)
        {
            if((i == j) || (i + j == len - 1)) sum_d += mat[i][j];
        }
    }
    return sum_d;
}

int main()
{
    vector<vector<int>> m1 = {{1,2,3}, {4,5,6}, {7,8,9}};
    vector<vector<int>> m2 = {{1,1,1,1}, {1,1,1,1}, {1,1,1,1}, {1,1,1,1}};
    cout<<diagonalSum(m1)<<" "<<diagonalSum(m2);
    return 0;
}