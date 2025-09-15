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
    int H,W;
    cin >> H >> W;
    vector<string> S(H);
    for(int i=0;i<H;i++) cin >> S[i];

    int di[4] = {-1,1,0,0};
    int dj[4] = {0,0,-1,1};

    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            if(S[i][j]=='.') continue;

            int cnt=0;
            for(int d=0; d<4; d++){
                int ni = i + di[d];
                int nj = j + dj[d];
                if(0 <= ni && ni < H && 0 <= nj && nj < W){
                    if(S[ni][nj]=='#') cnt++;
                }
            }
            if(!(cnt==2 || cnt==4)){
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}
