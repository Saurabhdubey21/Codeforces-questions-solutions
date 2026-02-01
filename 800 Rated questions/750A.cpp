//750A. New Year and Hurry
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int av_time=240-k;
    int req_time=0;
    int solved=0;
    for(int i=1;i<=n;i++){
        req_time=req_time+5*i;
        if(req_time>av_time)break;
        solved++;
    }
    cout<<solved<<endl;
}