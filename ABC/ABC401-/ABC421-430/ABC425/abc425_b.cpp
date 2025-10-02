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
    vector<int> A(N);
    vector<int> B(N);
    vector<bool> X(N,false);
    rep(i,N){
        cin>>A[i];
        if(A[i]!=-1){
            B[i]=A[i];
            X[A[i]-1]=true;
        } 
    } 
    rep(i,N){
        if(A[i]==-1){
            rep(j,N){
                if(X[j]==false){
                    B[i]=j+1;
                    X[j]=true;
                    break;
                }
            }
    }
}
    rep(i,N){
        if(X[i]==false){
            cout<<"No"<<endl;
            return 0;
        }
    }

    cout<<"Yes"<<endl;
    rep(i,N){
        cout<<B[i]<<" ";
    }
    cout<<endl;
    return 0;

}
