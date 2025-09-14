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
    string S;
    string T;
    cin>>S;
    int l=S.length();
    int i=0;
    while(S[i]!='\0'){
        if(S.substr(i,i+3)=="red"){
             i=i+3;
             T.append("SSS",3);
        }else if(S.substr(i,i+4)=="blue"){
            i=i+4;
            T.append("FFF",3);
        }else if(S.substr(i,i+5)=="green"){
            i=i+5;
            T.append("MMM",3);
        }else{
            cout<<"Unknown"<<endl;
            return 0;
        }
    };
    cout<<T<<endl;
    
    return 0;
}
