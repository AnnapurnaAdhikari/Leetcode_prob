#include <iostream>
using namespace std;

//Biweekly Easy Level 
//Accepted
int smallestNumber(int n, int t) {
        int temp = n; int pdt;
        while(temp < 100)
        {
            int temp1 = temp;
            pdt = 1;
            while(temp1 > 0)
            {
                pdt *= temp1%10;
                temp1 /= 10;
                if(pdt == 0) break;
            }
            // cout<<temp;
            if(pdt % t == 0) return temp;
            temp++;
        }
    }
int main()
{
    int n = 15, t = 3;
    cout<<smallestNumber(n, t);
    return 0;
}