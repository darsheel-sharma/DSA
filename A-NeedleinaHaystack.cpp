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
    int t; cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;

        if(s1.length() > s2.length()) {
            cout << "Impossible\n";
            continue;
        }

        string temp = s1;

        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        bool pos = true;
        int j = 0;
        for(int i=0; i<s1.length(); i++) {
            pos = false;
            while(j < s2.length()) {
                if(s1[i] == s2[j]) {
                    s2.erase(j, 1);
                    pos = true;
                    break;
                } else {
                    j++;
                }
            }
            if(!pos) break;
        }
        if(!pos) {
            cout << "Impossible\n";
            continue;
        }

        string ans = "";

    int i = 0;
    int k = 0;
    while(i < temp.length() && k < s2.length()) {
        if(temp[i] <= s2[k]) {
            ans += temp[i];
            i++;
        } else {
            ans += s2[k];
            k++;
        }
    }

    while(i < temp.length()) {
        ans += temp[i];
        i++;
    }

    while(k < s2.length()) {
        ans += s2[k];
        k++;
    }

    cout << ans << '\n';

    }
    return 0;
}