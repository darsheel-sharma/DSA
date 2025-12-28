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
        int l1, b1, l2, b2, l3, b3;
        cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;

        if(l1+l2+l3 == b1 && b1==b2 && b2==b3) cout<<"YES\n";
        else if(l2+l3 == l1 && b2==b3 && b1+b2==l1) cout<<"YES\n";
        else if(b1+b2+b3 == l1 && l1==l2 && l2==l3) cout<<"YES\n";
        else if(b2+b3 == b1 && l2==l3 && l1+l2==b1) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
