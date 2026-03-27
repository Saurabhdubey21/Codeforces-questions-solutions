//1971B. Different String
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        int start=0;
        int end=n-1;
        string r=s;
        while(start<=end){
            swap(s[start],s[end]);
            start++;
            end--;
        }
        if(r!=s){
            cout<<"Yes\n";
            cout<<s;
        }else{
            cout<<"No\n";
        }
    }
}