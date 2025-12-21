#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        if(k == 0) {
            int left = 0;
            int right = n-1;
            bool pos = false;
            while(left < right) {
                if(s[left] == s[right]) {
                    left++;
                    right--;
                } else if(s[left] < s[right]) {
                    pos = true;
                    break;
                } else break;
            }
            if(pos) cout << "yes\n";
            else cout << "no\n";
        } else {
            bool allDup = true;
            for(int i=0; i<n-1; i++) {
                if(s[i]!=s[i+1]) {
                    allDup = false;
                    break;
                }
            }
            if(allDup) cout << "no\n";
            else cout << "yes\n";
        }
    }
}
