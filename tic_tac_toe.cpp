#include <iostream>
#include <vector>
#include <string>
using namespace std;

void tictactoe(vector<vector<int>>& moves)
{
    //bool flag_a = false;
    int count_a = 0;
    int count_b = 0;
   for(int i = 0; i < moves.size(); i++)
   {
        if(i % 2 == 0){    
            if((moves[i][0] == moves[i][1])) count_a++;
            else if((moves[i][0] == moves[i + 2][0] )&& (moves[i + 2][0] == moves[i + 4][0])) cout<<"A1";
            else if((moves[i][1] == moves[i + 2][1]) && (moves[i + 2][1] == moves[i + 4][1])) cout<<"A2";
            else cout<<"aout";
        }
        else{
            if(moves[i][0] == moves[i][1]) count_b++;
            else if((moves[i][0] == moves[i + 2][0] ) && (moves[i + 2][0] == moves[i + 4][0])) cout<<"B1";
            else if((moves[i][1] == moves[i + 2][1]) && (moves[i + 2][1] == moves[i + 4][1])) cout<<"B2";
            else cout<<"bout";
        }
        
    }
    // if(count_a == 3) return "A";
    // else if(count_b == 3) return "B";
    // return "Draw";
}  

int main()
{
    vector<vector<int>> moves1 = {{0,0},{2,0},{1,1},{2,1},{2,2}};
    vector<vector<int>> moves2 = {{0,0},{1,1},{0,1},{0,2},{1,0},{2,0}};
    vector<vector<int>> moves3 = {{0,0},{1,1},{2,0},{1,0},{1,2},{2,1},{0,1},{0,2},{2,2}};
    // tictactoe(moves1);
    tictactoe(moves2);
    cout<<"\n";
    tictactoe(moves3);
    return 0;

}