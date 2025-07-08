#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    vector<long long> A(N);
    vector<long long> B(200,0);
    for(int i=0;i<N;i++){
        cin>>A[i];
        B[A[i]%200]++;
    }
    long long ans=0;
    for(int i=0;i<200;i++){
        ans+=B[i]*(B[i]-1)/2;
    }
    cout<<ans<<endl;
}
