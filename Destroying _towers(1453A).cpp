#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 1; i < n; i++) {
            if (a[i] > a[i - 1]) {
                a[i] = a[i - 1];
            }
        }

        int sum = 0;
        for (int x : a) {
            sum += x;
        }
        cout << sum << '\n';
    }
    return 0;
}