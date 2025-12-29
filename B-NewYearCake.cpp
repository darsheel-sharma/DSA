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
        int a, b;
        cin >> a >> b;

        int ans = 0, ans2 = 0;
        bool cho = true;
        int p2 = 1;
        int temp = a;
        int temp2 = b;
        while(true) {
            if(cho) {
                if(temp<p2) break;
                temp -= p2;
            } else {
                if(temp2<p2) break;
                temp2 -= p2;
            }
            ans++;
            p2 *= 2;
            cho = !cho;
        }
        cho = true;
        p2 = 1;
         while(true) {
            if(cho) {
                if(b<p2) break;
                b -= p2;
            } else {
                if(a<p2) break;
                a -= p2;
            }
            ans2++;
            p2 *= 2;
            cho = !cho;
        }
        

        cout << max(ans, ans2) << endl;
    }
    return 0;
}