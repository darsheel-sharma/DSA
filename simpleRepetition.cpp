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
        ll x, k;
        cin >> x >> k;

        if(x%2 == 0 && (x != 2 && k !=1)) {
            cout << "no\n";
        } else if(k > 1) {
            if(x == 1 && k == 2) cout << "yes\n";
            else cout << "no\n";
        } else {
            if(isPrime(x)) cout << "yes\n";
            else cout << "no\n";
        }
    }
}
