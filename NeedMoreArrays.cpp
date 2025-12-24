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
        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }
        vector<int> ans;
        int j=0;
        for(int i=0; i<n; i++) {
            if(i) {
                if(arr[i] - ans[j] > 1) {
                    ans.push_back(arr[i]);
                    j++;
                } 
            } else {
                ans.push_back(arr[i]);
            }
        }

        cout << ans.size() << '\n';
    }
}
