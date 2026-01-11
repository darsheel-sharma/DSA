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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; 
    cin >> t;
    while (t--) {
       int n;
       cin >> n;
       vector<ll> a(n), b(n);
        int count = 0;
        int c0 = 0;
       for(int i=0; i<n; i++) {
        cin >> a[i];
        if(a[i] == 0) c0++;
       }
       int pos = 0;
       for(int i=0; i<n; i++) {
        cin >> b[i];
        if(a[i] == b[i]) pos++;
        if(a[i] < b[i]) count++;
       }
       if (count == 0 || pos == n) {
        cout << "yes\n";
        continue;
       }
       if(c0>1) {
        cout << "No\n";
        continue;
        }
       ll maxi = LLONG_MAX;
       ll mini = 0;

       for(int i=0; i<n; i++) {
            if(a[i] < b[i]) {
                mini += b[i] - a[i];
            } else {
                maxi = min(maxi, a[i] - b[i]);
            }
       }

       if(maxi >= mini && count == 1) cout << "yes\n";
       //else if(maxi > mini) cout << "yes\n";
       else cout << "no\n";
    }
    return 0;
}