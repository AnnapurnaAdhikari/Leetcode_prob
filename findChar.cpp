#include <bits/stdc++.h>
using namespace std;

vector<int> findWordsContaining(vector<string>& words, char x) {
    //brute force
        vector<int> indices;
        // for(int i = 0; i < words.size();i++){
        //     bool flag = false;
        //     for(int  j = 0; j < words[i].size(); j++){
        //         if(words[i][j] == x) flag = true;
        //     }
        //     if (flag) indices.push_back(i);
        // }
        //optimized approach
        for(int i = 0; i < words.size();i++){
            int pos = words[i].find(x);
                if( pos != string::npos) indices.push_back(i);
        }
            
        return indices;
        
    }

int main(){
    vector<string> words = {"leet","code"}; char x = 'e';
    vector<int> indices = findWordsContaining(words, x);
    for(int y: indices) cout<<y<<" ";
    return 0;

}