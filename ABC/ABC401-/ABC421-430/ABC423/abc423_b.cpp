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
    int N;
    cin>>N;
    vector<int> L(N+1);
    for(int i=1;i<=N;i++){
        cin>>L[i];
    }
    int index0=-1;
    int index1=-1;
    for(int i=1;i<=N;i++){
        if(L[i]==1){
            index0=i;
            break;
        }
    }

    for(int i=N;i>=1;i--){
        if(L[i]==1){
            index1=i;
            break;
        }
    }
    if(index0==-1||index0==index1){
        cout<<0<<endl;
    }else{
        cout<<index1-index0<<endl;
    }
    
    return 0;
}
