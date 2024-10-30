#include <bits/stdc++.h>
using namespace std;
int abss(string a, string b){
    char x = b[0];
    char y = b[1];
    int c=a.size()-1;
    int step =0;
    while (c>0 && a[c]!=y){
        step+=1;
        c-=1;
    }
    c-=1;
    while (c>0 && a[c]!=x){
        step+=1;
        c-=1;
    }
    return step;
}


int main(){
vector<string> g={"00","25","50","75"};
int t;
cin >>t;

while (t--){
    string s;
    cin >> s;
    int steps=1e9;
    for(auto digit:g){
        steps=min(steps,abss(s,digit));
    }
    cout << steps << endl;
}
}