#include <iostream>
#include <string>

using namespace std;
bool judgeCircle(string moves) {
//  int lc =0, rc = 0, uc = 0, dc = 0;
    int hc =  0, vc = 0;
    for (int i  = 0; i < moves.size(); i ++)
    {   //Approach 1:
        // if(moves[i] == 'U') uc++;
        // else if(moves[i] == 'D') dc++;
        // else if(moves[i] == 'L') lc++;
        // else if(moves[i] == 'R') rc++;
        //Approach 2:
        if(moves[i] == 'U') vc++;
        else if(moves[i] == 'D') vc--;
        else if(moves[i] == 'L') hc++;
        else if(moves[i] == 'R') hc--;

    }
    // if( rc == lc && uc == dc) return true;
    // return false;
    if(hc == 0 && vc == 0) return true;
    return false;
}

int main()
{
    string s1 = "UD";
    string s2 = "RLUURDDDLU";
    cout<<judgeCircle(s1)<<" ";
    cout<<judgeCircle(s2)<<" ";
    return 0;

}