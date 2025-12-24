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
        set<int> st;
        bool pos = true;
        for(int i=0; i<n; i++) {
            int x;
            cin >> x;
            if(x == 0) pos = false;
            if(x!= -1) st.insert(x);
        }

        if((st.size() == 1 || st.size() == 0) && pos) cout << "yes\n";
        else cout << "no\n"; 
    }
}
