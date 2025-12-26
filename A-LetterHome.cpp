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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> arr(n);

        for(int i=0; i<n; i++) cin >> arr[i];
        
        int d1 = x - arr[0];
        int d2 = arr[n-1] - x;
        if(arr[0] > x) {
            cout << arr[n-1] - x << '\n';
        } else if(arr[n-1] < x) {
            cout << x - arr[0] << '\n';
        } else if(d1 < d2) {
            cout << 2*d1 + d2 << '\n';
        } else cout << 2*d2 + d1 << '\n';
    }
}
