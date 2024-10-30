#include <bits/stdc++.h>
using namespace std;
void full(){
    int n;
    cin >>n;
    vector<int> f(n);
    for(int i=0;i<n;i++){
        cin >> f[i];
    }
    int x=0,y=0;
    for (auto d:f){
        if (d==0){
            x++;
        }else if(d==1){
            y++;
        }
    }
    cout << y*(1LL<<x)<<endl;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        full();
    }
}