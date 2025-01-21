#include <bits/stdc++.h>
using namespace std;

bool searchInSorted(vector<int> arr, int k) {
    //BINARY SEARCH
    if (arr.empty()) return false;
    int low = 0;
    int high = arr.size() - 1;
    // int mid = (low + high) / 2;
    
    while (low <= high){
        int mid = low + (high - low) / 2;
        if(k == arr[mid]) return true;
        else if(k < arr[mid]) high = mid - 1;
        else low = mid + 1;
    }
    return false;
}
int main(){
    vector<int> num ={1, 2, 3, 4, 6};
    int k = 6;
    cout<<searchInSorted(num, k);
}