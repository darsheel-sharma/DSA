#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool isPrime(long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;

    if (n % 2 == 0 || n % 3 == 0) return false;

    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll c1 = 0;
        ll c2 = 0;
        for(ll i=0; i<n; i++) {
            if(s[i] == '-') c1++;
            else if(s[i] == '_') c2++;
        }
        
        cout << (c1/2)*c2*(c1 - c1/2) << "\n";
    }
}
