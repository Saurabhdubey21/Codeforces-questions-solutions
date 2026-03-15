//26A. Almost Prime
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    for(int i=2;i<=n;i++){
        int x=i;
        int prime_count=0;
        for(int j=2;j*j<=x;j++){
            if(x%j==0){
                prime_count++;
                while(x%j==0){
                    x=x/j;
                }
            }
        }
        if(x>1)prime_count++;
        if(prime_count==2)count++;
    }
    cout<<count<<endl;
}