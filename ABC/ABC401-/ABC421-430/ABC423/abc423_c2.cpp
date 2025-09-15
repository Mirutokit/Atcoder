#include <bits/stdc++.h>
using namespace std;

// N: ドアの数, S: 開始部屋 (1-indexed)
// doors[i] : i番目のドア (部屋 i と i+1 の間)
int main() {
    int N, S;
    cin >> N >> S;
    vector<int> doors(N + 1); // 1..N を使う
    for (int i = 1; i <= N; i++) cin >> doors[i];

    // --- アルゴリズム概要 ---
    // 左端に行ってから全部閉める or 右端に行ってから全部閉める
    // どちらが安いかをシミュレーションする。

    auto simulate = [&](bool goLeft) {
        vector<int> d = doors; // 状態をコピー
        int pos = S;           // 現在の部屋
        long long ops = 0;

        if (goLeft) {
            // 左端に移動
            for (int i = S - 1; i >= 1; i--) {
                if (d[i] == 1) {
                    // 閉じているので通れない → 開けて閉め直す
                    ops += 2;
                }
                pos--;
            }
            // 左から右に全て閉める
            for (int i = 1; i <= N; i++) {
                if (d[i] == 0) {
                    ops++;
                    d[i] = 1;
                }
            }
        } else {
            // 右端に移動
            for (int i = S; i <= N; i++) {
                if (d[i] == 1) {
                    ops += 2; // 開けて閉め直す
                }
                pos++;
            }
            // 右から左に全て閉める
            for (int i = N; i >= 1; i--) {
                if (d[i] == 0) {
                    ops++;
                    d[i] = 1;
                }
            }
        }
        return ops;
    };

    long long ans = min(simulate(true), simulate(false));
    cout << ans << "\n";
    return 0;
}
