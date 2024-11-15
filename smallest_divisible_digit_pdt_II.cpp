#include <iostream>
#include <string>
using namespace std;
//Biweekly Hard Level //Not all test case Passing, NOT EVEN HALF!!!
string smallestNumber(string num, long long t) {
        long n = stoi(num); int pdt;
        while(to_string(n).size() <= 200000)
        {
            pdt = 1; long nt = n;
            while(nt > 0)
            {
                pdt *= nt % 10;
                nt /= 10;
                if(pdt == 0) break;
            }
            // cout<<to_string(nt)<<" ";
            if(pdt == 0) n++;
            else if(pdt % t == 0) return to_string(n);
            n++;
        }
        return "-1";
    }


int main()
{   
    // string num = "12355"; long long t = 50;
string num ="12";
int t =1968750;
    // cout<<stoi("123");
    // cout<<to_string(123);
    cout << smallestNumber(num, t);
    return 0;
   
}