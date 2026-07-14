//114A. Cifera
#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,l;
    cin>>k>>l;
    int temp=l;
    int div=0;
    while(temp%k==0){
        temp=temp/k;
        div++;
    }
    if(temp==1){
        cout<<"YES"<<endl;
        cout<<div-1<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}