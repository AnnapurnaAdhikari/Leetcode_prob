#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int t;
    cin >> t;  // Number of test cases
    
    while (t--) {
        int n, m;
        cin >> n >> m;  // Number of words and max characters on the first strip
        
        vector<string> words(n);
        for (int i = 0; i < n; i++) {
            cin >> words[i];
        }
        
        int totalLength = 0;  // Keeps track of the total length of words
        int count = 0;        // Counts how many words fit on the first strip
        
        for (int i = 0; i < n; i++) {
            int wordLength = words[i].length();
            if (totalLength + wordLength <= m) {
                totalLength += wordLength;
                count++;
            } else {
                break;  // Stop when the limit is exceeded
            }
        }
        
        cout << count << endl;  // Output the result for this test case
    }
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    ll test=1;
//cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
