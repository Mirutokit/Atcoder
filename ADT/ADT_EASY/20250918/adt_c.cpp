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

ll Nto10(string S,ll N){
   reverse(S.begin(), S.end());

    // 答えを求める
    long long ans = 0;
    long long powN = 1;  // N^i を管理する変数
    for(auto c : S) {
        int s = c - '0';  // 今見ている桁の数字
        long long add = s * powN;  // その桁に注目したときの値
        ans += add;
        powN *= N;
    }
    return ans;
}

ll f(string s,ll k){ // K 進法表記の S を、10 進法表記で表す関数
    ll ans=0;
    for(char x:s){
        ans *= k;
        ans += x - '0';
    }
    return ans;
}

int main() {
    int N;
    cin>>N;
    vector<int> p(N);
    rep(i,N){
        cin>>p[i];
    }
    vector<int> rank(N,-1);
    int r=1;
    while(r<=N){
        int max=-2;
        rep(i,N){
            if(rank[i]!=-1) continue;
            if(max<p[i])max=p[i];
        }
        int k=0;
        rep(i,N){
            if(p[i]==max){
                rank[i]=r;
                k++;
            }
        }
        r+=k;
    }
    rep(i,N){
        cout<<rank[i]<<endl;
    }
    return 0;
}
