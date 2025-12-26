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
        int n;
        cin >> n;

        string s;
        cin >> s;

        
        map<char, int> mpp;
        bool pos = false;
        for(int i=0; i<n; i++) {
            mpp[s[i]]++;
            if(mpp[s[i]] > 1) {
                if(mpp[s[i]] == 2 && i == n-1 && s[n-1] == s[0]) {
                    break;
                } else {
                    pos = true;
                    break;
                }
            }
        }

        if(pos) cout << "yes\n";
        else cout << "no\n";
    }
}
