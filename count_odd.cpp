#include <iostream>
using namespace std;

int countOdds(int low, int high) {
        int odd_no = 0;
        for (int i = low; i <= high; i++)
        {
            // if(i % 2 != 0) odd_no++;
            //  odd_no += (i % 2 == 0) ? 0 : 1;
            odd_no += (i % 2);
        }
        return odd_no;
    }
int main()
{
    cout<<countOdds(3, 7)<<endl;
    cout<<countOdds(8, 10);
    return 0;
}