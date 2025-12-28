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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int c1 = 0, c2 = 0, c3 = 0;

        for(int i=0; i<k; i++) {
            if(s[i] == '0') c1++;
            else if(s[i] == '1') c2++;
            else c3++;
        }

        string ans(n, '+');

        for(int i=0; i<n; i++) {
            if(i < c1 + c3 || i>= n-c2-c3) ans[i] = '?';
            if(i < c1 || i >= n - c2 || k == n) ans[i] = '-';
        }

        cout << ans << '\n';
    }
    return 0;
}
