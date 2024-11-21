#include <bits/stdc++.h>
using namespace std;

// Input: a = "11", b = "1"
// Output: "100"

// Input: a = "1010", b = "1011"
// Output: "10101"

string addBinary(string a, string b) {
    vector<char> bin_add;
    bool carry_flag = false;
    for(int i = 0, j = 0; i < a.size() && j < b.size(); i++, j++)
    {   cout<<"inside_loop";
        if((a[i] == '0' && b[j] == '1') && (!carry_flag)) bin_add.push_back('1');
        else if ((a[i] == '0' && b[j] == '0') && (!carry_flag)) bin_add.push_back('0');
        else if ((a[i] == '1' && b[j] == '0') && (!carry_flag)) bin_add.push_back('1');
        else if((a[i] == '1' && b[j] == '1') && (!carry_flag))
        {
            bin_add.push_back('0'); carry_flag = true;
        } 
        else if((a[i] == '0' && b[j] == '1') && (carry_flag))
        {
            bin_add.push_back('0'); carry_flag = false;
        } 
        else if ((a[i] == '0' && b[j] == '0') && (carry_flag))
        {
            bin_add.push_back('1'); carry_flag = false;
        } 
        else if ((a[i] == '1' && b[j] == '0') && (carry_flag))
        {bin_add.push_back('0'); carry_flag = false;} 
        else if((a[i] == '1' && b[j] == '1') && (carry_flag))
        {
            bin_add.push_back('1'); carry_flag = false;
        }
        else if((a[i] == '0'|| b[j] == '0') && carry_flag)
        {
            bin_add.push_back('1'); carry_flag = false;
        } 
        else if((a[i] == '1'|| b[j] == '1') && !carry_flag)
        {bin_add.push_back('1'); carry_flag = false;}
        else if((a[i] == '0'|| b[j] == '0') && !carry_flag)
        {bin_add.push_back('0');}
        else if((a[i] == '1'|| b[j] == '1') && carry_flag)
        {bin_add.push_back('0'); carry_flag = false;}
        
    }
    string str(bin_add.begin(), bin_add.end());
    return str;

}
int main()
{
    string a = "11", b = "1";
    // string a = "1010", b = "1011";
    cout<<addBinary(a, b);
    return 0;

}