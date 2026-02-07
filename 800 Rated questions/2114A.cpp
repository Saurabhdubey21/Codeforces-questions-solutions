//2114A. Square Year
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int year=stoi(s);
        int x=sqrt(year);
        if(x*x!=year)cout<<-1<<endl;
        else{
            int a=x/2;
            int b=x-a;
            cout<<a<<" "<<b<<" \n";
        }
    }
}