#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <stack>
#include <numeric>
using namespace std;
//use stack!! we have to remove the top and to add in the top

int calPoints(vector<string>& operations) 
{
    // int sum = 0;
    // int len = operations.size();
    vector<int> record;
    for(int i = 0; i < operations.size(); i++)
    {
        int prev;
        if(operations[i] == "C") record.pop_back();
        else if(operations[i] == "D") record.push_back(record[record.size() - 1]*2);
        else if(operations[i] == "+") record.push_back(record[record.size() -2] + record[record.size() - 1]);
        else record.push_back(stoi(operations[i]));
    }
    // for(int x: record) cout<<x<<" ";
    // cout<<endl;
    // for(int x: record) sum += x;
    // return sum;
    return accumulate(record.begin(), record.end(), 0);
}

int main(){
    vector<string> ops1 = {"5","2","C","D","+"}; //30 
    vector<string> ops2 = {"5","-2","4","C","D","9","+","+"}; //27
    cout<<calPoints(ops1)<<" ";
    cout<<calPoints(ops2)<<" ";
    return 0; 
}