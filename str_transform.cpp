//Leetcode contest - medium
#include <iostream>
#include <string>
#include<vector>
using namespace std;
int lengthAfterTransformations(string s, int t) {
        int t_len = 0, j = 1;
        vector<vector<char, char>>sv;
        for(int i=0; i < s.size(); i++)
        {   
            if(int(s[i]) + 1 == 122) {
                s[i] = char(int(s[i]) + 1);
                sv[i].push_back('a');
                sv[i].push_back('b');
            }
            else {
                s[i] = char(int(s[i]) + 1);
                sv[i].push_back(s[i]);
                }
            // cout<<s[i]<<" ";
        }
        j++;
        while(j <= t)
        {
            for(int i = 0; j<sv.size(); j++)
            {
                if(int(sv[i][0]) + 1 == 122 || int(sv[i][1]) + 1 == 122) {
                sv[i].push_back('a');
                sv[i].push_back('b');
            }
            else {
                s[i] = char(int(s[i]) + 1);
                sv[i].push_back(s[i]);
                }
            // cout<<s[i]<<" ";
            }
            j++;
        }
        // for(char x: sv){
        //     cout<<int(x)<<" ";
        //     if(int(x) > 122 || int(x) < 97) t_len+=2;
        //     else t_len++;
        // }
        // return t_len;
        // for(char x: sv){
        //     cout<<x<<" ";
        // }
        return sv.size();
        
        }
int main()
{
    string s1 = "jqktcurgdvlibczdsvnsg";
    int t = 7517;
    cout<<lengthAfterTransformations(s1, t);
    return 0;

}