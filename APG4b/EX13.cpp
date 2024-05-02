#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int ave=0;
    cin>>n;
    vector<int> vec(n);
    int tmp;
    for (int i=0;i<n;i++) {
        cin>>tmp;
        vec[i]=tmp;
        ave+=tmp;
    }
    ave/=n;
    for (int i=0;i<n;i++) {
        cout<<abs(ave-vec[i])<<endl;
    }
}