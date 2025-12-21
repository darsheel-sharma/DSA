#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, j, k;
        cin >> n >> j >> k;

        vector<int> arr(n);

        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }
        int target = arr[j-1];
        sort(arr.begin(), arr.end());
        if(arr[n-1] == target) cout << "yes" << endl;
        else {
            if(k < 2) cout << "no" << endl;
            else cout << "yes" << endl;
        }
    }
}
