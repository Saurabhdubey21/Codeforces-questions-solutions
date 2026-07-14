#include<bits/stdc++.h>
using namespace std;
vector<long long>good;
bool isgood(long long x){
    if(x==0)return true;
    set<int>s;
    while(x>0){
        s.insert(x%10);
        x=x/10;
    }
    return s.size()<=2;
    
}
void solve(string curr,int len){
    if(!curr.empty()&&curr[0]!='0'){
        long long num=stoll(curr);
        good.push_back(num);
    }
    if ((int)curr.size()==len)return;
    for (char d='0';d<='9';d++) {
        string nxt=curr+d;
        set<char>st(nxt.begin(),nxt.end());
        if (st.size()<=2)
            solve(nxt,len);
    }
}
int main(){
    for(int len=1;len<=7;len++){
        solve("",len);
    }
    sort(good.begin(),good.end());
    good.erase(unique(good.begin(),good.end()),good.end());
    int tc;
    cin>>tc;
    while(tc--){
        long long x;
        cin>>x;
        for(long long i=0;i<good.size();i++){
            long long y=good[i];
            if(y<2)continue;
            if(isgood(x*y)){
                cout<<y<<"\n";
                break;
            }
        }
    }
}