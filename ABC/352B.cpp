#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
  string s,t;
  cin>>s>>t;
  int length=0;
  char s_c;
  for (int i=0;i<t.size();i++){
    s_c=s[length];
    if (s_c==t[i]) {
      cout<<i+1;
      length++;
      if (i!=t.size()-1) cout<<' ';
      else cout<<endl;
    }
  }
}