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
       
       string s;
       cin >> s;

       if(n == 1 || n == 2) {
        cout << 0 << "\n";
        continue;
       }

       vector<int> posA, posB;

       for(int i=0; i<n; i++) {
        if(s[i] == 'a') posA.push_back(i);
        else posB.push_back(i);
       }

       if (posA.empty() || posB.empty()) {
        cout << 0 << "\n";
        continue;
    }


       int medA = posA[posA.size()/2];
       int medB = posB[posB.size()/2];;
       int indA = posA.size()/2;
       int indB = posB.size()/2;
       ll ansA=0;
       ll ansB=0;

       for(int i=0; i<posA.size(); i++) {
        ansA += (long long)abs(posA[i] - i - medA + indA);
       }

       for(int i=0; i<posB.size(); i++) {
        ansB += (long long)abs(posB[i] - i - medB + indB);
       }

       cout << min(ansA, ansB) <<"\n";

    }
    return 0;
}