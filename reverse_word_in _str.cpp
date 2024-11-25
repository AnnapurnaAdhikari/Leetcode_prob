//medium
#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
        string trim;
        int n = s.size(), i = 0;
        while(i < n && s[i] == ' ') i++;
        while(i < n){
            if(s[i] != ' '){
                trim += s[i];
            }
            else if(!trim.empty() && trim.back() != ' ') trim += ' ';
            i++;
        }
        if(!trim.empty() && trim.back() == ' ') trim.pop_back();
        int start = 0, end = trim.size() - 1;
        while(start < end) swap(trim[start++], trim[end--]);
        start = 0;
        for(i = 0; i <= trim.size(); ++i){
            if(i == trim.size() || trim[i] == ' '){
                int left = start, right = i - 1;
                while(left < right) swap(trim[left++], trim[right--]);
                start = i + 1;
            }
        }
        return trim;        
    }

int main(){
    string s = "  hello world  ";
    string s2 = "a good   example";
    cout<<reverseWords(s)<<endl;
    cout<<reverseWords(s2);
    return 0;
}