#include <bits/stdc++.h>
#include <vector>
using namespace std;

// for(int i = 0; i < n; i++)
#define rep(i, n) for(int i=0;i<(int)(n);i++)
// for(int i = init; i < n; i++)
#define rep_s(i, init, n) for(int i=(int)(init);i<(int)(n);i++)

// TLEとWA出した
int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    rep(i,n){
        cin>>a[i];
    }
    int count=0;
    std::vector<pair<int, int>> ref;
    rep(i,n){
        // 一致するならcontinue
        if(a[i]==i+1) continue;
        // 一致しなければその値のところを探しswap
        else {
            rep_s(j, i+1, n){
                if (a[j]==i+1) {
                    swap(a[i], a[j]);
                    ref.push_back({a[i],a[j]});
                    count++;
                    break;
                }
                else continue;
            }
        }
    }
    cout<<count<<endl;
    for(pair p:ref){
        cout<<p.first<<' '<<p.second<<endl;
    }
}
