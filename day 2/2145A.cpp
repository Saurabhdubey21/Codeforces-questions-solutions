//2145A. Candies for Nephews
#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    for(int i=0;i<tc;i++){
        int n;
        cin>>n;
        int needs=0;
        if(n%3==0){
            needs=0;
        }else{
        needs=3-(n%3);   
        }
        cout<<needs<<endl;
    }
}