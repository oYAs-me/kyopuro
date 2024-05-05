#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  int delta=0;
  long long sum=0;
  cin>>n;
  int a,b;
  for (int i=0;i<n;i++) {
    cin>>a>>b;
    sum+=a;
    if(delta<b-a) delta=b-a;
  }
  cout<<sum+delta<<endl;
}