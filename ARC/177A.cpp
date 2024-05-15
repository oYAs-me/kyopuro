#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
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
    int a,b,c,d,e,f,n,x,temp;
    bool ok=true;
    cin>>a>>b>>c>>d>>e>>f>>n;
    rep(i,n){
        cin>>x;
        if(x/500>0&&f>0) {temp=min(x/500,f);f-=temp;x-=temp*500;}
        if(x/100>0&&e>0) {temp=min(x/100,e);e-=temp;x-=temp*100;}
        if(x/50>0&&d>0) {temp=min(x/50,d);d-=temp;x-=temp*50;}
        if(x/10>0&&c>0) {temp=min(x/10,c);c-=temp;x-=temp*10;}
        if(x/5>0&&b>0) {temp=min(x/5,b);b-=temp;x-=temp*5;}
        if(x/1>0&&a>0) {temp=min(x/1,a);a-=temp;x-=temp;}
        if(x>0) {ok=false;break;}
    }
    if(ok) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}