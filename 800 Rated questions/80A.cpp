// 80A. Panoramix's Prediction
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    for(int j=n+1;j<=m;j++){
        bool isprime=true;
        for(int i=2;i*i<=j;i++){
            if(j%i ==0){
                 isprime=false;
                break;
            }
        }
        if(isprime){
            if(j==m){
                cout<<"yes\n";
            }
            else{
                cout<<"No\n";
            }
            return 0;
        }
    }
    cout<<"No\n";
}
