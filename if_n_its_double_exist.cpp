#include <bits/stdc++.h>
using namespace std;

bool checkIfExist(vector<int>& arr) {
    for(int i = 0; i < arr.size(); i++){
        cout<<"arr[i] "<<arr[i]<<endl;
        for(int j = i + 1; j < arr.size(); j++){
            cout<<"arr[j] "<<arr[j]<<endl;
            if (arr[i] == 2*arr[j]) return true;
            else if(arr[j] == 2*arr[i]) return true;
        }
    } 
    return false;   
}

int main()
{
    vector<int> arr = {7,1,14,11};
    vector<int> arr02 = {3,1,7,11};

    cout<<checkIfExist(arr);
    return 0;
}