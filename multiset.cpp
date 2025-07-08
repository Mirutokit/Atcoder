#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >>q;
    multiset<int> st;
    while(q--){
    int t;
    cin>>t;
    if(t==1){
       int x;
       cin >> x;
       st.insert(x);
    } else if (t==2){
        int x,c;
        cin >>x>>c;
        while(c--&&st.find(x)!=st.end()){
            st.erase(st.find(x));
        }
    } else{
        cout <<*st.rbegin()-*st.begin()<<endl;
    }
}
}