#include <iostream>
#include <string>
using namespace std;

int lengthOfLastWord(string s) 
{
    int len = s.size();
    int count = 0;
    if(len > 1){
            for(int i = len - 1; i >= 0; i--)
            {
            if(s[i] == ' ' && count == 0) continue;
            else if (s[i] != ' ')
            {
                ++count;
                // cout<<count<<"<-count ";
            } 
            else if(s[i] == ' ' && count != 0) return count;
            }
        }
    else if(len = 1 && s[0] != ' ') ++count;
    return count;
}

int main()
{
    string s1 = "a ";
    string s2 = " a";

    cout<<lengthOfLastWord(s1)<<" ";
    cout<<lengthOfLastWord(s2)<<" ";

    return 0;
}