//1791A. Codeforces Checking
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char ch;
        cin>>ch;
        string s="codeforces";
        bool found=false;
        for(int i=0;i<s.size();i++){
            if(s[i]==ch){
                found=true;
                break;
            }
        }
        if(found){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}