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

ll N,T;

ll getVal(ll idx) {
    return (idx + T) % N;
}

int main() {
    ll Q;
    cin>>N>>Q;
    vector<ll> A(N);
    rep(i,N){
        cin>>A[i];
    }

    vector<ll> prefix(N+1,0);
    rep(i,N) prefix[i+1]=prefix[i]+A[i];
    T=0;
    while(Q--){
        int x;
        cin>>x;
        if(x==1){
            ll c;
            cin>>c;
            T=(T+c)%N;
        }else{
            ll l,r;
            cin>>l>>r;
            l--;
            r--;
            ll L=getVal(l);
            ll R=getVal(r);
            ll ans=0;
            if(L<=R){
               ans=prefix[R+1]-prefix[L];
            }else{
                ans=(prefix[N]-prefix[L])+(prefix[R+1]-prefix[0]);
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}


