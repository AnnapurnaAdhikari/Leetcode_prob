#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int c_diff = arr[0] - arr[1];
        // cout<<c_diff;
        for(int i  = 1; i < (arr.size() - 1); i++)
        {
            if(c_diff != (arr[i] - arr[i + 1])) return false;
        }
        return true;
    }

int main()
{
    vector<int> arr ={1, 2, 4};
    cout << canMakeArithmeticProgression(arr);
    return 0;
}