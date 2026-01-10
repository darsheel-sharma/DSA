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

        int c0 = 0;
        int c1 = 0;

        vector<int> arr(n);

        for(int i=0; i<n; i++) {
            cin >> arr[i];
            if(arr[i] == 1) c1++;
            else c0++;
        }

        if(c1 == n) {
            cout << "alice\n";
            continue;
        }
        if(c0 == n) {
            cout << "bob\n";
            continue;
        }
        if(arr[0] == arr[n-1] && arr[0] == 0) cout << "bob\n";
        else cout << "alice\n";
    }
    return 0;
}
