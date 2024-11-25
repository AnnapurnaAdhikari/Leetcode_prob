//easy
#include <bits/stdc++.h>
using namespace std;

int numberOfSteps(int num) {
    int count = 0;
    while(num){
        if(num % 2 == 0){
            num /= 2;
            count++;
        }
        else
        {
            num--;
            count++;
        } 
    }
    return count;
}

int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;
    cout<<numberOfSteps(n);
    return 0;
}