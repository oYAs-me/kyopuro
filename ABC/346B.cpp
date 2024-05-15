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

// たまに違うらしい
int main() {
    int w12=7,b12=5;
    int w,b;
    cin>>w>>b;
    int total=w+b;
    w -= (total/12)*7;
    b -= (total/12)*5;
    if((w<0||b<0) || (b>w)) {cout<<"No"<<endl;return 0;}
    if(b==0){if(w==0||w==1||w==2){cout<<"Yes"<<endl;}else cout<<"No"<<endl;}
    else if(b==1){if(w==0||w==1||w==2||w==3){cout<<"Yes"<<endl;}else cout<<"No"<<endl;}
    else if(b==2){if(w==1||w==2||w==3||w==4){cout<<"Yes"<<endl;}else cout<<"No"<<endl;}
    else if(b==3){if(w==2||w==3||w==4||w==5||w==6){cout<<"Yes"<<endl;}else cout<<"No"<<endl;}
    else if(b==4){if(w==3||w==4||w==5||w==6||w==7){cout<<"Yes"<<endl;}else cout<<"No"<<endl;}
    else if(b==5){if(w==4||w==5||w==6){cout<<"Yes"<<endl;}else cout<<"No"<<endl;}
}