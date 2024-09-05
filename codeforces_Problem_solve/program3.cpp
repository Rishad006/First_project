#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;
        string a, b;
        cin >> a >> b;

        while (q--) {
            int l, r;
            cin >> l >> r;
            --l; --r;
            string subA = a.substr(l, r - l + 1);
            string subB = b.substr(l, r - l + 1);
            sort(subA.begin(), subA.end());
            sort(subB.begin(), subB.end());
            if (subA == subB) {
                cout << 0 << '\n';
            } else {
                // Compute the number of changes required
                int changes = 0;
                for (int i = 0; i < subA.size(); ++i) {
                    if (subA[i] != subB[i]) {
                        changes++;
                    }
                }
                cout << changes / 2 << '\n';
            }
        }
    }

    return 0;
}
