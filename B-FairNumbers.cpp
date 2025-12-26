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
    if((n & (n-1)) == 0) {
        return true;
    }
    return false;
}

bool isFair(ll x) {
    ll temp = x;
    while (temp > 0) {
        int d = temp % 10;
        temp /= 10;
        if (d == 0) continue;
        if (x % d != 0) return false;
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
        ll x = n;
        while (!isFair(x)) {
            x++;
        }
        cout << x << '\n';
    }
    return 0;
}
