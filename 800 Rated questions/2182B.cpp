//2182B. New Year Cake
#include<bits/stdc++.h>
using namespace  std;
int solve(long long a,long long b,bool startWhite){
    long long layer=1;
    int count=0;
    bool whiteTurn=startWhite;
    while (true){
        if (whiteTurn){
            if(a<layer)break;
            a=a-layer;
        }else{
            if(b<layer)break;
            b=b-layer;
        }
        count++;
        layer=layer*2;
        whiteTurn=!whiteTurn;
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        int ans=max(solve(a,b,true),
                      solve(a,b,false));

        cout<<ans<<"\n";
    }
}