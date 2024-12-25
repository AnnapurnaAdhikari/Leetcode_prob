#include <bits/stdc++.h>
using namespace std;

bool canConstruct01(string ransomNote, string magazine) {
    if(ransomNote.size() == magazine.size())
    {
        if(ransomNote == magazine) return true;
        else false;
    }
    for(char c: ransomNote){
        int matching_idx = magazine.find(c);
        if(matching_idx == -1) return false;
        magazine = magazine.substr(0, matching_idx) + magazine.substr(matching_idx + 1);
    }
    return true;

}
//freq counting method
bool canConstruct02(string ransomNote, string magazine) {
    vector <int> ransom(26, 0);//represent freq of each letter
    vector<int> mag(26, 0);
    for(char c: ransomNote){
        ransom[c - 'a']++;
    }
    for(char ch: magazine){
        mag[ch - 'a']++;
    }
    for(int  i = 0; i < 26; i++){
        if(ransom[i] > mag[i]) return false;
    }
    return true;

}

int main()
{
    // string ransomNote = "aa", magazine = "ab";
    string ransomNote = "aa", magazine = "aab";
    cout<<canConstruct01(ransomNote, magazine);
    return 0;
}