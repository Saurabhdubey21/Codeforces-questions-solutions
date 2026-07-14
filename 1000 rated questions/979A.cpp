//979 A. Pizza, Pizza, Pizza!!!
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long res;
    if(n==0)cout<<0<<endl;
    else if(n%2==0){
        res=n+1;
        cout<<res<<endl;
    }else{
        res=(n+1)/2;
        cout<<res<<endl;
    }
}