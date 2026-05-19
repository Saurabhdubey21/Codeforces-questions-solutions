//1913B. Swap and Delete
#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int zerocnt=0;
    int onecnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            zerocnt++;
        }else{
            onecnt++;
        }
    }
    int len=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            if(onecnt==0){
                break;
            }
            onecnt--;
        }else{
            if(zerocnt==0){
                break;
            }
            zerocnt--;
        }
        len++;
    }
    cout<<s.size()-len<<endl;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}