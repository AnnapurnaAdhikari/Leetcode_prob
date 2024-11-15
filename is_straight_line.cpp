#include <bits/stdc++.h>
using namespace std;

bool checkStraightLine(vector<vector<int>>& coordinates) {
        if(coordinates.size() == 2) return true;
        int x_diff = coordinates[0][0] - coordinates[1][0];
        int y_diff = coordinates[0][1] - coordinates[1][1];
        int curr_yd, curr_xd;
        for(int i = 2; i < coordinates.size(); i++)
        {
            curr_xd = coordinates[i - 1][0] - coordinates[i][0];
            curr_yd = coordinates[i - 1][1] - coordinates[i][1];
            if(curr_xd*y_diff != curr_yd*x_diff) return false;
        }
        return true;
        // if (coordinates[0][0] == coordinates[1][0] == coordinates[2][0])
        // {
        //     int sum_x = 0;
        //     for(int i = 0; i < coordinates.size(); i++) sum_x += coordinates[i][0];
        //     if (sum_x/float(coordinates.size()) == coordinates[0][0]) return true;
        // }
        // else if(coordinates[0][1] == coordinates[1][1] == coordinates[2][1])
        // {
        //     int sum_y = 0;
        //     for(int i = 0; i < coordinates.size(); i++) sum_y += coordinates[i][0];
        //     if (sum_y/coordinates.size() == coordinates[0][0]) return true;
        // }
        // float m = (coordinates[0][1] - coordinates[1][1])/(float(coordinates[0][0] - coordinates[1][0])); //slope
        // if (coordinates.size() == 3)
        // {   cout<<m*(coordinates[2][0] - coordinates[1][0]) + coordinates[1][1]<<endl;
        //     if(float(coordinates[2][1]) != m*(coordinates[2][0] - coordinates[1][0]) + coordinates[1][1])
        //     {return false;}
        //     else return true;
        // }
        // int diff_x = coordinates[0][0] - coordinates[1][0];
        // int diff_y = coordinates[0][1] - coordinates[1][1];
        // cout<<"diff_x, diff_y: "<<diff_x<<diff_y<<endl;
        // for(int i = 1; i < coordinates.size() - 1; i++)
        // {   cout<<"xd: "<<coordinates[i][0] - coordinates[i + 1][0]<<" "<<"yd: "<<coordinates[i][1] - coordinates[i + 1][1]<<endl;
        //     if((coordinates[i][0] - coordinates[i + 1][0] != diff_x) || (coordinates[i][1] - coordinates[i + 1][1] != diff_y))
        //     {
        //         return false;}
        //     continue;
        // }
        // return true;

        
}
int main()
{
    vector<vector<int>>coordinates = {{1,2},{2,3}, {3,4},{4,5},{5,6},{6,7}};
    vector<vector<int>>coordinates01 = {{1,1},{2,2},{3,4},{4,5},{5,6},{7,7}};
     vector<vector<int>>coordinates02 = {{0,0},{0,1},{0,-1}};
     vector<vector<int>>coordinates03 = {{1,2},{2,3},{3,5}};
     vector<vector<int>>coordinates04 = {{2,1},{4,2},{6,3}};
     vector<vector<int>>coordinates05 = {{1,1},{2,2},{2,1},{3,2}};
    vector<vector<int>>coordinates06 = {{1,2},{1,3},{1,4},{1,5},{1,6},{6,7}};
    vector<vector<int>>coordinates07 = {{-3,-2},{-1,-2},{2,-2},{-2,-2},{0,-2}};

    //  [[1,2],[2,3],[3,5]]

    cout<<checkStraightLine(coordinates)<<endl;
    cout<<checkStraightLine(coordinates01)<<endl;    
    cout<<checkStraightLine(coordinates02)<<endl;
    cout<<checkStraightLine(coordinates03)<<endl;
    cout<<checkStraightLine(coordinates06)<<endl;
    cout<<checkStraightLine(coordinates07)<<endl;
    // cout<<0.5*2;
        

    return 0;
}