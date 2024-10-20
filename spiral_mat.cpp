#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder01(vector<vector<int>>& matrix) {
    int len = matrix.size();
    vector<int>spi_ord;
    int curr_row, curr_col;
    
    for(int i = 0; i < len; i++)
    {   int j;
        for(j = 0; j < matrix[0].size(); j++)
        {
            spi_ord.push_back(matrix[i][j]);
        }
        curr_col = j - 1, curr_row = i;
        break;
    }

    for(int i = curr_row+1; i < len; i++ )
    { 
        spi_ord.push_back(matrix[i][curr_col]);
        // cout<<"i, j "<<i<<curr_col;
    }
    curr_row = len - 1;
    for(int  j = curr_col - 1; j >= 0; j--)
    {
        spi_ord.push_back(matrix[curr_row][j]);
    }
    curr_col = 0;
    for(int i = curr_row - 1; i > 0; i--)
    {
        spi_ord.push_back(matrix[i][curr_col]);
    }
    curr_row = len - 2;
    for(int j = curr_col + 1; j < len - 1; j++)
    {
        spi_ord.push_back(matrix[curr_row][j]);
    }
    return spi_ord;
}

vector<int> spiralOrder02(vector<vector<int>>& matrix)
{   int len = matrix.size();
    int curr_r = 0, curr_c = 0, curr_r_len = len, curr_c_len = matrix[0].size();
    int flag = 0;
    vector<int> sp;
    while(curr_c_len != 0 && curr_r_len != 0){
    if (flag % 2 == 0){
        for(; curr_c < curr_c_len; curr_c++)
        {
            sp.push_back(matrix[curr_r][curr_c]);
        }
        curr_c_len--;
        curr_r ++; curr_c--;
        flag++;
    }
    else{
        for(int i = curr_r; i < curr_r_len; i++)
        {
            sp.push_back(matrix[i][curr_c]);
        }
        curr_r_len--; curr_r--;
        flag++;
    }
    }
    return sp;
}
int main()
{
    vector<vector<int>> m1 = {{1,2,3}, {4,5,6}, {7,8,9}};
    vector<int> ma1 = spiralOrder01(m1);
    vector<int> ma2 = spiralOrder02(m1);
    for (int x: ma2) cout<<x<<" ";
    return 0;
}