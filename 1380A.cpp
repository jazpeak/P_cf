#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >>n;
    int m=n-1;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    for(int i=1;i<n-1;i++){
        if (v[i]>v[i+1] && v[i]>v[i-1]){
            cout << "YES"<<endl;
            cout<<i<<" "<<i+1<<" "<<i+2<<endl;
            return;
        }
    
    }
    cout << "NO"<< endl;
}
int main(){
    int t;
    cin >>t;
    while (t--){
        solve();
    }
}