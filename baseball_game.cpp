#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
using namespace std;

int calPoints(vector<string>& operations) 
{
    int sum = 0;
    int len = operations.size();
    vector<int> record(len);
    for(int i = 0; i < operations.size(); i++)
    {
        if(operations[i] == "C") record[i-1] = 0;
        else if(operations[i] == "D") record.push_back(record[i - 1]*2);
        else if(operations[i] == "+") record.push_back(record[i - 1] + record[i - 2]);
        else record.push_back(stoi(operations[i]));
    }

    for(int x: record)
    {
        sum += x;
    }
    return sum;
}

int main(){
    vector<string> ops1 = {"5","2","C","D","+"}; //30
    vector<string> ops2 = {"5","-2","4","C","D","9","+","+"}; //27
    cout<<calPoints(ops1)<<" ";
    cout<<calPoints(ops2)<<" ";
    return 0; 
}