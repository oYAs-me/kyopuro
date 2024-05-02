#include<bits/stdc++.h>
using namespace std;

int main() {
    int ans=1;
    string s;
    cin>>s;

    for (int i=1; i<s.size(); i+=2) {
        if (s[i]=='+') {
            ans+=1;
        } else if (s[i]=='-') {
            ans-=1;
        }
    }
    cout<<ans<<endl;
}