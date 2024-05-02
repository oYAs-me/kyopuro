#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int x,a,b;
    cin>>x>>a>>b;
    cout<<++x<<endl;
    x*=a+b;
    cout<<x<<endl;//2
    x*=x;
    cout<<x<<endl;//3
    cout<<x-1<<endl;

}