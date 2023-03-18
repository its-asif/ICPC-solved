#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll f (ll k, ll n) {
    if (k == 1)  return 1;
    if (k == 2 || k==3)  return 2;
    if (k == 4)  return 4;
    
  if (k <= ((ll)1<<(n+1)))  return f(k, n - 1);
  else  return 2 * f(k - ((ll)1<<(n+1)), n - 1);
}

int main(){
  ios::sync_with_stdio(0), cin.tie(0);

  int tc;  cin >> tc;
  for (int t = 1; t <= tc; ++t) {
    cout << "Case " << t << ": ";

    ll k, n;  cin >> k >> n;
    if (k > ((ll)1<<(n+2))) {
        cout << "-1\n"; 
    }
    else cout << f(k, n) << "\n";
  }
}
