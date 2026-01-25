//2180B. Ashmal
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s="";
        for(int i=0;i<n;i++){
            string a;
            cin>>a;
            string front=a+s;
            string back=s+a;
            s=min(front,back);
        }
        cout<<s<<endl;
    }
} 