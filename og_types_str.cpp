//Leetcode Contest - easy level

#include <iostream>
#include<string>
#include <vector>
using namespace std;

    int possibleStringCount(string word) {
        int len = word.size();
        vector<int> count_char;
        int t_count  = 1;
        int j;
        // for(int i = 0; i  < len; i++)
        //     {
        //         int count = 0;
        //         for(j = i+1; j < len; j++)
        //             {
        //                 if(word[j] == word[i]){
        //                 count++;
        //                 } 
        //                 else break;
        //             }
        //             count_char.push_back(count);
        //             if( j == len) break;
        //     }
        for(int i = 0; i  < len - 1; i++)
        {
            if(word[i] == word[ i+ 1]) t_count++;
        }
        
        // for(int x: count_char)
        // {
        //     cout<<x<<" ";
        //     t_count += x;
        // }
        return t_count;
    }

int main()
{
    string s1 = "aaaa";
    cout<<possibleStringCount(s1);
    return 0;
}