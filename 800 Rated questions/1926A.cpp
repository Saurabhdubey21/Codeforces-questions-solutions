//1926A.A. Vlad and the Best of Five
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int A_count=0;
        int B_count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A')A_count++;
            else{
                B_count++;
            }    
        }
        if(A_count>B_count){
            cout<<'A'<<endl;
        }else{
            cout<<'B'<<endl;
        }
    }
}