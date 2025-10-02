#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using ull=unsigned long long;
#define pb push_back
#define rep(i,n) for (int i=0; i<(n); i++)
#define reps(i,n) for (int i=1; i<=(n); i++)
#define for_(i,a,b) for (int i=(a); i<(b); i++)
#define Yes(b) ((b)?"Yes":"No")
#define YES(b) ((b)?"YES":"NO")
template <typename T> inline bool chmin(T& a, const T& b) {bool compare = a > b; if (a > b) a = b; return compare;}
template <typename T> inline bool chmax(T& a, const T& b) {bool compare = a < b; if (a < b) a = b; return compare;}
template <typename T> T gcd(T a, T b) {if (b == 0)return a; else return gcd(b, a % b);}
template <typename T> inline T lcm(T a, T b) {return (a * b) / gcd(a, b);}
template <typename T> inline T ceil(T a,T b) {return (a+(b-1))/b;}
template <typename T> inline T floor(T a,T b) {return a/b;}


int main() {
    ll N;
    cin >> N;
    vector<ll> A(N+1), B(N+1);
    vector<int> indeg(N+1, 0); 
    vector<vector<int>> g(N+1); 
    vector<bool> skill(N+1, false);

    for (ll i=1;i<=N;i++) {
        cin>>A[i]>>B[i];
        if (A[i]!=0) {
            g[A[i]].push_back(i);
            indeg[i]++;
        }
        if (B[i]!=0) {
            g[B[i]].push_back(i);
            indeg[i]++;
        }
    }
    queue<int> q;
    ll ans=0;
    for (ll i=1;i<= N;i++) {
        if (A[i]==0&&B[i]==0) {
            skill[i] = true;
            q.push(i);
            ans++;
        }
    }

    while (!q.empty()) {
        int cur=q.front(); q.pop();
        for (int nxt : g[cur]) {
            if (skill[nxt]) continue; 
            if ((A[nxt]==0||skill[A[nxt]]) ||(B[nxt]==0||skill[B[nxt]])) {
                skill[nxt] = true;
                ans++;
                q.push(nxt);
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
