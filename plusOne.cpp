#include <iostream>
#include <vector>
using namespace std;
vector<int> plusOne(vector<int>& digits) {
        int len = digits.size();
        if (len == 1 && digits[0] == 9){
            digits[0] = 1;
            digits.push_back(0);
            return digits;
        }
        // else if(digits[len - 1] == 9 && digits[0] == 9){
        //     digits[0] = 1;
        //     for(int i = 1; i < len; i++){
        //         digits[i] = 0;
        //     }
        //     digits.push_back(0);
        //     return digits;
        // }
        else if(digits[len - 1] == 9){
            for(int i = len -1; i >= 0; i--)
            {
                if(digits[i] == 9) digits[i] = 0;
                else {
                    digits[i]++;
                    return digits;
                }
            }
            if (digits[0] == 0) {
                digits[0] = 1;
                digits.push_back(0);
                return digits;
            }
            return digits;
        }

        else if(digits[len - 1] != 9){
            digits[len - 1] ++;
            return digits;
        }
        else{
            digits[len - 1] = 0;
            digits[len - 2]++;
            return digits;
        }
        return digits;
    }

int main()
{
    vector<int> d = {9, 9, 9};
    vector<int> ans = plusOne(d);
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}