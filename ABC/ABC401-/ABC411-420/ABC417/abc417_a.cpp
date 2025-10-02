#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
#define repr(i,n) for(int i=n;i>=0;i--)

int main(){
  int N,A,B;
  string S;
  cin>>N>>A>>B>>S;
  for(int i=A;i<N-B;i++){
    cout<<S[i];
  }
  cout<<endl;
return 0;
}