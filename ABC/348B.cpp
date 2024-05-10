#include <bits/stdc++.h>
#include <vector>
#include <math.h>
using namespace std;

// for(int i = 0; i < n; i++)
#define rep(i, n) for(int i=0;i<(int)(n);i++)
// for(int i = init; i < n; i++)
#define rep_s(i, init, n) for(int i=(int)(init);i<(int)(n);i++)

int main() {
    int n;
    cin>>n;
    vector<pair<int,int>> xy(n);
    int x,y;
    rep(i,n){
        cin>>x>>y;
        xy[i]={x,y};
    }
    double temp;
    int num;
    for(pair p: xy){
        double d=0;
        x=p.first;
        y=p.second;
        rep(i,n){
            temp = sqrt((x-xy[i].first)*(x-xy[i].first)+(y-xy[i].second)*(y-xy[i].second));
            if (temp>d) {
                num=i;
                d=temp;
            }
        }
        cout<<num+1<<endl;
    }
}