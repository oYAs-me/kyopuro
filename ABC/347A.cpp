#include <bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long ll;

// for(int i = 0; i < n; i++)
#define rep(i, n) for(int i=0;i<(n);i++)
// for(int i = (init); i < (n); i++)
#define rep2(i, init, n) for(int i=(init);i<(n);i++)

// (x ^ y)
ll powll(ll x, ll y) {if (y<2) return 1;
    ll ans = x; rep(i,y-1) ans *= x; return ans;
}

int main() {
    int n,k;
    cin>>n>>k;
    int a;
    bool space=false;
    rep(i,n){
      cin>>a;
      if(a%k==0){
        if (space) cout<<' '<<a/k;
        else {cout<<a/k;space=true;}
      }
    }
  cout<<endl;
}