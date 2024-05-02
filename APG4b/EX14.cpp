#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,delta;
    cin>>a>>b>>c;
    delta=max(a,max(b,c))-min(a,min(b,c));
    cout<<delta<<endl;
}