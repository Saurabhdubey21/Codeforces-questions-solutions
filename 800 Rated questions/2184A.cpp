//2184A. Social Experiment
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int difference=0;
        if(n<=3){
            difference=n;
        }else{
            difference=n%2;
        }
        cout<<difference<<" "<<endl;
    }
}