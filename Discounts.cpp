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
        int n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for(int i=0; i<n; i++) cin >> a[i];
        vector<int> b(k);
        for(int i=0; i<k; i++) cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int temp = n;
        for(int i=0; i<k; i++) {
            if(b[i] > temp) break;

            temp = temp - b[i];
            a[temp] = -1*1LL;
        }

        ll ans = 0;
        for(int i=0; i<n; i++) {
            if(a[i] != -1) ans += a[i];
        }

        cout << ans << '\n';
    }
}
