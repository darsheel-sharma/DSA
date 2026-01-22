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

bool isPow2(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
       ll n, x, k;
       cin >> n >> x >> k;
       string s;
       cin >> s;

       ll ans = 0;

       for(int i=0; i<n; i++) {
        x += (s[i] == 'L' ? -1 : 1);
        k--;
        if(!x) break;
       }

       if(!x) {
        ans = 1;
        for(int i=0; i<n; i++) {
            x += (s[i] == 'L' ? -1 : 1);
            if(!x) {
                ans += k / (i + 1);
                break;
            }
        }
       }

       cout << ans << '\n';
    }
    return 0;
}