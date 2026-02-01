//1A. Theatre Square
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a;
    cin>>n>>m>>a;
    long long len=(n+a-1)/2;
    long long bdth=(m+a-1)/2;
    long long ans=len*bdth;
    cout<<ans<<endl;
}