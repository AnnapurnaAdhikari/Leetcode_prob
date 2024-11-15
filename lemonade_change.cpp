// Input: bills = [5,5,5,10,20]
// Output: true
// Explanation: 
// From the first 3 customers, we collect three $5 bills in order.
// From the fourth customer, we collect a $10 bill and give back a $5.
// From the fifth customer, we give a $10 bill and a $5 bill.
// Since all customers got correct change, we output true.

#include <iostream>
#include <vector>
using namespace std;

bool lemonadeChange(vector<int>& bills) {
        int fives = 0 , tens = 0;
        for(int bill: bills)  
        {
                if(bill == 5) fives++;
                else if(bill == 10) 
                {
                        tens++;
                        fives--;
                }
                else if(tens > 0)
                {
                        tens--; fives--;
                }
                else fives -= 3;
                if(fives < 0) return false;
        }  
        return true;
}
int main()
{
        vector<int>bills = {5,5,5,10,20};
        vector<int>bills_01 = {5,5,10,10,20};
        cout<<lemonadeChange(bills)<<endl;
        cout<<lemonadeChange(bills_01);
        return 0;
}
