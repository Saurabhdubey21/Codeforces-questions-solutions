//2197A. Friendly Numbers
#include<bits/stdc++.h>
using namespace std;
int sum(long long y){
    int sum1=0;
    while(y>0){
        int digit=y%10;
        sum1=sum1+digit;
        y=y/10;
    }
    return sum1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x;
        cin>>x;
        int count=0;
        for(long long y=x;y<x+90;y++){
            if(y-sum(y)==x){
                count++;
            }
        }
        cout<<count<<endl;
    }
}