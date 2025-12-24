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
        int n;
        cin >> n;
        
        vector<int> arr(n);
        bool hasOne = false;
        for(int i=0; i<n; i++) {
            cin >> arr[i];
            if(arr[i] <= 2*i || arr[i] <= 2*(n-i-1)) {
                hasOne = true;
            }
        }
        if(hasOne) cout << "no\n";
        else cout << "yes\n";
    }
}
