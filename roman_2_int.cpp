#include <iostream>
#include <map>
#include <string>
using namespace std;

int romanToInt(string s) {
        map<char, int> conv_lst = {{'I', 1},{'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int sum = 0;
        for(int i = 0; i < s.size(); i++){
            if (conv_lst[s[i]] < conv_lst[s[i + 1]])
            {
                 if (s[i] == 'I' && s[i + 1] == 'V') sum+= 4;
                if (s[i] == 'I' && s[i + 1] == 'X') sum+= 9;
                else if(s[i] == 'X' && s[i + 1] == 'L') sum+= 40;    
                else if(s[i] == 'X' && s[i + 1] == 'C') sum+= 90;
                else if(s[i] == 'C' && s[i + 1] == 'D') sum += 400;
                else if(s[i] == 'C' && s[i + 1] == 'M') sum += 900;
                i++;
            }
            else{sum += conv_lst[s[i]];}
            
        }
        return sum;
    }

    int main()
    {
        string s = "MCMXCIV";
        cout<<romanToInt(s)<<" ";
        string v = "MCDLXXVI"; //1476
        cout<<romanToInt(v)<<" ";
        return 0;
    }