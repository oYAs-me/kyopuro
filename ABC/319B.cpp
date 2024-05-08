#include <bits/stdc++.h>
#include <vector>
using namespace std;

// for(int i = 0; i < n; i++)
#define rep(i, n) for(int i=0;i<(int)(n);i++)
// for(int i = init; i < n; i++)
#define rep_s(i, init, n) for(int i=init;i<(int)(n);i++)

int main() {
    int n;
    cin>>n;
    string s(n+1,'-');
    for (int i=0;i<n+1;i++){
        rep_s(j,1,10){
            if(n%j==0 && i%(n/j)==0) {
                s[i]=j+'0'; // (char) = (int) + '0';
                break;
            }
        }
    }
    cout<<s<<endl;
}