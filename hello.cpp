#include <bits/stdc++.h>
using namespace std;
#define ll long long


//       /\_/\
//      ( -.- )
//      (  > < )
//     /   ^   \
//    |   \|/   |
//     \   ---  /
//      `-----'



bool _ = 1;


void solve(){
    ll a,b;cin>>a>>b;
    cout<<a+b<<endl;
    cout<<a*b<<endl;
    vector<pair<ll,ll>> vp={{74,6},{78,56}};
    for(auto a:vp){
        cout<<a.first<<" "<<a.second<<endl;
    }
}


int main(){
    if(_){solve();return 0;}
    long long int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}