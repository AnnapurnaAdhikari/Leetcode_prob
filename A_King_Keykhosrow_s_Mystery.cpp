#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
    int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);}
    int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;}
void solve()
{
    int a, b;
    cin >> a >> b;
    if (a == b) cout << a << endl; 
    else cout << lcm(a, b) << endl; 
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    ll test=1;
cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
