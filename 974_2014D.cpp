#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);

void overlap(){
    int n,d,k;
    cin >> n>>d>>k;
    vector<int> ss(n+1),es(n+1);
    for(int i=0;i<k;i++){
        int a,b;
        cin>>a>>b;
        ss[a]++;
        es[b]++ ;       
    }
    for(int i=0;i<n;i++){
        ss[i+1]+=ss[i];
        es[i+1]+=es[i];
    }
    int x,f,g;
    int most=0,least=1e9;
    for(int i=d;i<=n;i++){
        x=ss[i]-es[i-d];
        if (x>most){
            most=x;
            f=i-d+1;
        }
        if (x<least){
            least=x;
            g=i-d+1;
        }
    } 
    cout << f << ' '<< g<<'\n';   
}

int main(){
    fastio();
    int t;
    cin>> t;
    while (t--) overlap();
    return 0;
}