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
        int n;
        cin >> n;

        vector<int> arr(n);
        vector<int> pre(n + 1, INT_MAX);
        vector<int> suff(n + 1, INT_MIN);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            pre[i + 1] = min(pre[i], arr[i]);
        }

        for (int i = n - 1; i >= 0; i--) {
            suff[i] = max(suff[i + 1], arr[i]);
        }

        string ans(n, '0');
        for (int i = 0; i < n; i++) {
            if (arr[i] == pre[i + 1] || arr[i] == suff[i]) {
                ans[i] = '1';
            }
        }

        cout << ans << '\n';
    }
    return 0;
}