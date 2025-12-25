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
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for(int i=0; i<n; i++) cin >> arr[i];
        int ans = 0;
        sort(arr.begin(), arr.end());

        int left = 0, right = n-1;

        while(right > left) {
            if(arr[left] + arr[right] == k) {
                ans++;
                left++;
                right--;
            } else if(arr[left] + arr[right] > k) {
                right--;
            } else left++;
        }
        cout << ans << '\n';
    }
}
