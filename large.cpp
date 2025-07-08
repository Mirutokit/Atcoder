#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int q;
    cin >> q;

    deque<pair<ll, ll>> st;  // (値, 個数) のペア
    while (q--) {
        int t;
        cin >> t;

        if (t == 1) {
            ll x, c;
            cin >> c >> x;
            st.emplace_back(x, c);
        } else if (t == 2) {
            ll k;
            cin >> k;
            ll sum = 0;
            while (k > 0 && !st.empty()) {
                auto &[x, c] = st.front();
                ll take = min(k, c);
                sum += x * take;
                c -= take;
                k -= take;
                if (c == 0) st.pop_front();  // 使い切ったら削除
            }
            cout << sum << endl;
        }
    }
}
