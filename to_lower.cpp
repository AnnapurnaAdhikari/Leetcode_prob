#include <iostream>
#include <string>
using namespace std;


string toLowerCase(string s) {
        for(int i = 0; i < s.size(); i++)
        {
            if(int(s[i]) < 97) s[i] = char(tolower(s[i]));
        }
        return s;
    }

int main(){
    string s = "KOAla";
    cout<<toLowerCase(s);
    return 0;
}