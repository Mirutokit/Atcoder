#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
#define repr(i,n) for(int i=n;i>=0;i--)

int main(){
  int N,M;
  cin>>N>>M;
  ll x;
  vector<int> a,nxt;
  bool flag;
  rep(i,N){
    cin>>x;
    a.push_back(x);
  }
  rep(i,M){
    cin>>x;
    flag=false;
    int n=a.size();
    nxt.clear();
    rep(j,n){
      if((a[j]==x)&&(!flag)){
        flag=true;
      }else{
        nxt.push_back(a[j]);
      }
    }
    a=nxt;
  }
  ll Q=(ll)a.size();
  rep(i,Q){
    cout<<a[i];
    if(i<(Q-1))cout<<" ";
    else cout<<endl;
  }
return 0;
}