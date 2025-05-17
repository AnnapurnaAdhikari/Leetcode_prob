#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        int n;
        cin >> n;  // Length of the array
        
        vector<long long> a(n);
        long long total_sum = 0;
        
        // Read the array and calculate total sum
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            total_sum += a[i];
        }
        
        // Check if total sum is divisible by n
        if (total_sum % n != 0) {
            cout << "NO" << endl;
            continue;
        }
        
        long long target = total_sum / n;  // Target value for each element
        long long carry = 0;              // Carry to manage redistribution
        bool possible = true;

        // Traverse the array
        for (int i = 0; i < n; i++) {
            carry += a[i] - target;  // Adjust carry for the current element
            if (carry < 0) {         // If carry is negative, redistribution fails
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES" : "NO") << endl;  // Print result
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
