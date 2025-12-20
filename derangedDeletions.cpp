#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for(int i=0; i<n; i++) cin >> a[i];

        vector<int> ans(2);
        bool pos = false;
        for(int i=0; i<n-1; i++) {
            if(a[i] > a[i+1]) {
                ans[0] = a[i];
                ans[1] = a[i+1];
                pos = true;
            }
        }
        if(pos) {
            cout << "YES\n" << 2 << "\n" << ans[0] << ' ' << ans[1] << '\n';
        } else {
            cout << "No" << "\n";
        }
    }
}
