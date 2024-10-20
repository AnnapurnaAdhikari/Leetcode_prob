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
    int r = 1, d = 0, u = 0, l = 0;
    vector<int> sp;
    while(curr_c_len != 0 && curr_r_len != 0){
    if (r == 1){
        for(; curr_c < curr_c_len; curr_c++)
        {
            cout<<" r = 1 -> curr_r: "<<curr_r<<" "<<"curr_c: "<<curr_c<<"\n";
            cout<<"curr_r_len: "<<curr_r_len<<"\n";
            sp.push_back(matrix[curr_r][curr_c]);
        }
        curr_c_len--;
        curr_r ++; curr_c--;
        r = 0; d = 1;
        }
    else if(d == 1){
        for(; curr_r < curr_r_len; curr_r++)
        {
            cout<<" d = 1 -> curr_r: "<<curr_r<<" "<<"curr_c: "<<curr_c<<"\n";
            cout<<"curr_r_len: "<<curr_r_len<<"\n";
            sp.push_back(matrix[curr_r][curr_c]);
        }
        curr_r_len--; curr_r--; curr_c--;
        d = 0; l = 1;
    }
    else if (l == 1)
    {
        for(; curr_c >= 0; curr_c--)
        {
            cout<<" l = 1 -> curr_r: "<<curr_r<<" "<<"curr_c: "<<curr_c<<"\n";
            sp.push_back(matrix[curr_r][curr_c]);
        }
        curr_r--;curr_c++;
        curr_c_len--;
        l = 0; u = 1;
    }
    else if(u == 1)
    {
        for(;curr_r > 0; curr_r--)
        {
            cout<<" u = 1 -> curr_r: "<<curr_r<<" "<<"curr_c: "<<curr_c<<"\n";
            sp.push_back(matrix[curr_r][curr_c]);
        }
        curr_r++; curr_r_len--; curr_c++; curr_c_len++;
        u = 0; r = 1;
    }
    }
    return sp;
}
int main()
{
    vector<vector<int>> m1 = {{1,2,3}, {4,5,6}, {7,8,9}};
    vector<vector<int>> m2 = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
    vector<vector<int>> m3 = {{3}, {2}};
    // vector<int> ma1 = spiralOrder01(m1);
    // vector<int> ma02 = spiralOrder02(m1);
    // vector<int> ma2 = spiralOrder02(m2);
    vector<int> ma3 = spiralOrder02(m3);
    // for (int x: ma02) cout<<x<<" ";
    // cout<<"\n";
    // for (int x: ma2) cout<<x<<" ";
    // cout<<"\n";
    for (int x: ma3) cout<<x<<" ";
    return 0;
}