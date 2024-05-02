#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    vector<vector<char>> data(n,vector<char>(n,'-'));
    int a,b;
    for (int i=0;i<m;i++){
        cin>>a>>b;
        data[a-1][b-1]='o';
        data[b-1][a-1]='x';
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout<<data[i][j];
            if(j!=n-1){
                cout<<' ';
            }
        }
        cout<<endl;
    }
}