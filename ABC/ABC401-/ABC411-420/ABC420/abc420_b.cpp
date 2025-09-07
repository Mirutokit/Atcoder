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
    int N,M;
    cin >>N>>M;
    vector<string> S(N);
    rep(i,N){
        cin>>S[i];
    }
    vector<int> score(N,0);
    for(int i=0;i<M;i++){
        int x=0,y=0;
        vector<int> index0;
        vector<int> index1;
        for(int j=0;j<N;j++){
            if(S[j][i]=='0'){
                x++;
                index0.push_back(j);
            }else{
                y++;
                index1.push_back(j);
            }
        }
        if(x==0||y==0){
            rep(k,N){
                score[k]++;
            }
        }else if(x<y){
            rep(k,index0.size()){
                score[index0[k]]++;
            }
        }else{
            rep(k,index1.size()){
                score[index1[k]]++;
            }

            
        }
    }
    int max=*max_element(begin(score),end(score));
    rep(i,N){
        if(score[i]==max){
            cout<<i+1<<" ";
        }
    }
    cout<<endl;
    return 0;
}
