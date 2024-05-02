#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,ans,b;
    string op;
    cin>>n>>ans;
    for (int i=0;i<n;i++){
        cin>>op>>b;
        if(op=="+") ans+=b;
        else if(op=="-") ans-=b;
        else if(op=="*") ans*=b;
        else if(op=="/"){
            if(b==0){cout<<"error"<<endl;break;}
            else ans/=b;
        }

        cout<<i+1<<":"<<ans<<endl;
    }
}