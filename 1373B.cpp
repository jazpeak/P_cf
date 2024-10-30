#include <bits/stdc++.h>
using namespace std;


void solve(){
    string s;
    cin >> s;
    int x=0,y=0;
    for(int i=0;i<s.size();i++){
        if (s[i]=='0'){
            x++;
        }
        else if (s[i]=='1'){
            y++;
        }
    }
    if (min(x,y)%2==0){
        cout<<"NET"<<endl;
    
    }else{
        cout <<"DA"<<endl;
    }
}
int main(){
    int t;
    cin >>t;
    while (t--){
        solve();
    }
}