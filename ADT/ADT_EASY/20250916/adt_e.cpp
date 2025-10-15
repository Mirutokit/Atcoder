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


int main() {
    int N,Q;
    cin>>N>>Q;
    ll cnt=0;
    vector<ll> box(N,1);
    vector<ll> bird(N);
    vector<bool> check(N,false);
    rep(i,N) bird[i]=i;
    while(Q--){
        int type;
        cin>>type;
        if(type==1){
             ll P,H;
             
             cin>>P>>H;
            box[bird[P-1]]--;
            ll origin =bird[P-1];
             bird[P-1]=H-1;
             box[H-1]++;
             
             
             if(check[H-1]==false&&box[H-1]>1){
                cnt++;
                check[H-1]=true;
             }
             else if(check[H-1]==true&&box[H-1]<=1){
                cnt--;
                check[H-1]=false;
             }

             if(check[origin]==false&&box[origin]>1){
                cnt++;
                check[origin]=true;
             }
             else if(check[origin]==true&&box[origin]<=1){
                cnt--;
                check[origin]=false;
             }


        }else{
           cout<<cnt<<endl;
        }
    }
    
    return 0;
}
