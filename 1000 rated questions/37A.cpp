//37 A. Towers
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>freq(1001);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        freq[x]++;
    }
    int maxi=0;
    int tower=0;
    for(int i=0;i<1000;i++){
        if(freq[i]>0){
            maxi=max(maxi,freq[i]);
            tower++;
        }
    }
    cout<<maxi<<" "<<tower<<endl;
}