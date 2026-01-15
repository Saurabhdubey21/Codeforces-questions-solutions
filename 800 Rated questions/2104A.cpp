// 2104A. Three Decks
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int sum=a+b+c;
        if(sum%3 !=0){
            cout<<"No\n";
            continue;
        }
        int x =sum/3;
        if(max(a,b)<=x){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
}