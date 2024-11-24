//easy level
#include <bits/stdc++.h>
using namespace std;

bool canAliceWin(int n) {
        if(n < 10) return false;
        else{
            int prev = n - 10;
            int al = 10;
            while(true){
                if(prev >= --al){
                    prev -= al;
                } 
                else return true;
            }
            return false;
        }
        
}
int main()
{
    int t_stones;
    cout<<"enter total no. of stones: ";
    cin>>t_stones;
    cout<<canAliceWin(t_stones);
}