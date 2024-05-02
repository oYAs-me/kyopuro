#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    int sum=0;
    int temp;
    for (int i=0;i<n;i++){
        cin>>temp;
        sum+=temp;
    }
    return sum;
}

int main() {
    int n;
    int ans=1;
    cin>>n;
    for (int i=0;i<3;i++){
        ans*=sum(n);
    }
    cout<<ans<<endl;
}