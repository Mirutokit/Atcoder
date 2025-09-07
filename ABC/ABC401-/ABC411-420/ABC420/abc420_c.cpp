#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
#define repr(i,n) for(int i=n;i>=0;i--)

int main(){
  int N,Q;
  cin>>N>>Q;
  vector<int> A(N),B(N);
  long long sum=0;
  rep(i,N){
    cin>>A[i];
  }
  rep(i,N){
    cin>>B[i];
    sum+=min(A[i],B[i]);
  }
  char c;
  int X,V;
  rep(i,Q){
    cin>>c>>X>>V;
    if(c=='A'){
        sum-=min(A[X-1],B[X-1]);
        A[X-1]=V;
        sum+=min(A[X-1],B[X-1]);
    }else{
        sum-=min(A[X-1],B[X-1]);
        B[X-1]=V;
        sum+=min(A[X-1],B[X-1]);
    }
    cout <<sum<<endl;
  }

return 0;
}