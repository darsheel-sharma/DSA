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

    // int t;
    // cin >> t;
    // while (t--) {
        
    // }

    ll a, b ,c, n;
    cin >> a >> b >> c >> n;

    ll res = a%n;
    res = (res*(b % n)) % n;
    res = (res*(c % n)) % n;

    if(res != 0) cout << -1 << '\n';
    else {
        ll a1 = gcd(n, a);
        ll a2 = n/a1;
        ll b1 = gcd(a2, b);
        ll b2 = a2/b1;
        ll c1 = gcd(b2, c);
        ll c2 = b2/c1;
        
        if(c2 != 1) cout << -1 << '\n';
        else cout << a1 - 1 << " " << b1 - 1 << " " << c1 - 1 << '\n';
    }
    return 0;
}