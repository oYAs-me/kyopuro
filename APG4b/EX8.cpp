#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int ptrn;
    cin>>ptrn;
    string text;
    int price,n;
    if(ptrn==1){
        cin>>price>>n;
        cout<<n*price<<endl;
    }else{
        cin>>text>>price>>n;
        cout<<text<<"!"<<endl;
        cout<<n*price<<endl;
    }
}