#include<bits/stdc++.h>
using namespace std;

void bracket(int n) {
    for (int i=0;i<n;i++){
        cout<<"]";
    }
}

int main() {
    int a,b;
    cin>>a>>b;
    cout<<"A:";
    bracket(a);
    cout<<endl;
    cout<<"B:";
    bracket(b);
    cout<<endl;
}