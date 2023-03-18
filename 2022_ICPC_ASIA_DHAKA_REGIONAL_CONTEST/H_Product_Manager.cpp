#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll tt; cin>>tt;
    for(int t=1;t<=tt;t++){
        
        int n,k; cin>>n>>k;
        for(int i=0;i<n;i++){ ll x; cin>>x;}
        ll ans =1;
        for (int i = 2; i <= n; i++)  ans *= i;
        
        cout<<"Case "<<t<<": "<<ans<<endl;
    }
}