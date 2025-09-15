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
    int N,R;
    cin>>N>>R;
    vector<int> L(N+1);
    int key_cnt=0;
    int ans=0;
    for(int i=1;i<=N;i++){
        cin>>L[i];
        if(L[i]==1) key_cnt++;
    }
    if(key_cnt==N){
        cout<<0<<endl;
        return 0;
    } 
    if(R==0){
        int index0=-1;
       for(int i=N;i>=R+1;i--){
             if(L[i]!=1){
                index0=i;
                break;
             }
       }
       if(index0==N){
            ans=key_cnt+N;
       }else{
            ans=key_cnt-(N-index0)+N-(N-index0);
       }
       cout<<ans<<endl;
    }else if(R==N){
        int index0=-1;
       for(int i=1;i<=N;i++){
             if(L[i]!=1){
                index0=i;
                break;
             }
       }
       if(index0==1){
            ans=key_cnt+N;
       }else{
            ans=key_cnt-(index0-1)+N-(index0-1);
       }
       cout<<ans<<endl;
    }else{
        int index0=-1;
       for(int i=N;i>=R+1;i--){
             if(L[i]!=1){
                index0=i;
                break;
             }
       }
       int index1=-1;
       for(int i=1;i<=R;i++){
             if(L[i]!=1){
                index1=i;
                break;
             }
       }
       if(index1==1&&index0==N){
            ans=key_cnt+N;
            cout<<ans<<endl;
            return 0;
       }else if(index1!=1){
            ans=key_cnt-(index1-1)+N-(index1-1);
            cout<<ans<<endl;
            return 0;
       }else if(index0!=N){
            ans=key_cnt-(N-index0)+N-(N-index0);
            cout<<ans<<endl;
            return 0;
       }else {
        ans=key_cnt+N;
        cout<<ans<<endl;
        return 0;
       }

    }
    
    return 0;
}
