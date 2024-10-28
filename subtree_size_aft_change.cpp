//Leetcode contest - medium
#include <iostream>
#include <string>
#include<vector>
using namespace std;
    vector<int> findSubtreeSizes(vector<int>& parent, string s) {
        vector<int> answer;
        for(int j = 0; j < parent.size(); j++){  
        for(int  i = j + 1; i < parent.size(); i++){
            if(s[i] == s[j] && parent[i] != parent[j])
                {
                    parent[i] = j;
                }
            }
        }
        answer.push_back(parent.size());
        
        for(int  i = 1; i < parent.size(); i++)
        {
            int count = 0;
            for(int j = 1; j <parent.size(); j++)
            {
            if(parent[j] == i)count++;
            }
            answer.push_back(count);
        }
        return answer;

        
    }
int main()
{
    vector<int> p ={-1,0,4,0,1};
    string v = "abba";
    vector<int> res = findSubtreeSizes(p, v);
    

}