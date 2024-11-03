#include <bits/stdc++.h>
using namespace std;

int f(int a, int b) {
    if (a > b) return 1;
    if (a == b) return 0;
    if (a < b) return -1;
    return 0; 
    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int ans = 0;
        if (f(a, c) + f(b, d) > 0) {
            ans += 1;
        }
        if (f(a, d) + f(b, c) > 0) {
            ans += 1;
        }
        if (f(b, c) + f(a, d) > 0) {
            ans += 1;
        }
        if (f(b, d) + f(a, c) > 0) {
            ans += 1;
        }
        cout << ans << endl;
    }
    return 0;
}
 
