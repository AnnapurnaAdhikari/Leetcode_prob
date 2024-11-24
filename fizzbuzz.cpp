//easy
// Input: n = 3
// Output: ["1","2","Fizz"]

#include <bits/stdc++.h>
using namespace std;

vector<string> fizzBuzz(int n) {
    vector<string> fb;
    for(int i = 1; i <= n; i++){
        if (i % 3 == 0 && i % 5 == 0) fb.push_back("FizzBuzz");
        else if(i % 3 == 0) fb.push_back("Fizz");
        else if(i % 5 == 0) fb.push_back("Buzz");
        else fb.push_back(to_string(i));
    } 
    return fb;
}

int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;
    vector<string> ans = fizzBuzz(n);
    for(string x: ans) cout<<x<<", ";
    return 0;
}