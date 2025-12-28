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
        vector<int> pos0;
        vector<int> used(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            arr[i]--;
            if(arr[i] == -1) {
                pos0.push_back(i);
            } else {
                used[arr[i]] = 1;
            }
        }

        if(pos0.size() == 1) {
            int g = 0;
            for(int i = 0; i < n; i++) if(used[i] == 0) g = i;
            arr[pos0[0]] = g;
        }
        int l = 0, r = n - 1;
        while(l < n && arr[l] == l) l++;
        while(r >= 0 && arr[r] == r) r--;
        cout << max(0, r - l + 1) << "\n";
    }
    return 0;
}
