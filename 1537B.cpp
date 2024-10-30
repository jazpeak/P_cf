#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,m,i,j;
    cin>>n>>m>>i>>j;
    int max=0;
    int x1,y1,x2,y2;
    if (max<((n-1)+(1-1)+(i-1)+j-1+abs(i-n)+abs(j-1))){
        max=(n-1)+(1-1)+(i-1)+j-1+abs(i-n)+abs(j-m);
        x1=1;
        x2=n;
        y1=1;
        y2=1;
    }
    if (max<((1-1)+(m-1)+(i-1)+j-1+abs(i-1)+abs(j-m))){
        max=(1-1)+(m-1)+(i-1)+j-1+abs(i-1)+abs(j-m);
        x1=1;
        y1=1;
        x2=1;
        y2=m;
    }
    if (max<((n-1)+(m-1)+(i-1)+j-1+abs(i-n)+abs(j-m))){
        max=(n-1)+(m-1)+(i-1)+j-1+abs(i-n)+abs(j-m);
        x1=1;
        y1=1;
        x2=n;
        y2=m;
    }
    if (max<((n-1)+abs(1-m)+abs(i-n)+j-1+abs(i-1)+abs(j-m))){
        max=(n-1)+abs(1-m)+abs(i-n)+j-1+abs(i-1)+abs(j-m);
        x1=n;
        y1=1;
        x2=1;
        y2=m;
    }
    if (max<((n-n)+abs(1-m)+abs(i-n)+j-1+abs(i-n)+abs(j-m))){
        max=(n-n)+abs(1-m)+abs(i-n)+j-1+abs(i-n)+abs(j-m);
        x1=n;
        y1=1;
        x2=n;
        y2=m;
    }
    if (max<((n-1)+abs(i-1)+abs(j-m)+abs(i-n)+abs(j-m))){
        max=(n-1)+abs(i-1)+abs(j-m)+abs(i-n)+abs(j-m);
        x1=1;
        y1=m;
        x2=n;
        y2=m;
    }
    cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}





/*
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, i, j;
    cin >> n >> m >> i >> j;

    long long max_dist = 0; // Change max to max_dist and use long long for large values
    int x1, y1, x2, y2;

    // Check each corner pair with the given distance formula
    if (max_dist < ((long long)(n-1) + (1-1) + (i-1) + (j-1) + abs(i-n) + abs(j-1))) {
        max_dist = (long long)(n-1) + (1-1) + (i-1) + (j-1) + abs(i-n) + abs(j-1);
        x1 = 1;
        y1 = 1;
        x2 = n;
        y2 = 1;
    }
    
    if (max_dist < ((long long)(1-1) + (m-1) + (i-1) + (j-1) + abs(i-1) + abs(j-m))) {
        max_dist = (long long)(1-1) + (m-1) + (i-1) + (j-1) + abs(i-1) + abs(j-m);
        x1 = 1;
        y1 = 1;
        x2 = 1;
        y2 = m;
    }
    
    if (max_dist < ((long long)(n-1) + (m-1) + (i-1) + (j-1) + abs(i-n) + abs(j-m))) {
        max_dist = (long long)(n-1) + (m-1) + (i-1) + (j-1) + abs(i-n) + abs(j-m);
        x1 = 1;
        y1 = 1;
        x2 = n;
        y2 = m;
    }
    
    if (max_dist < ((long long)(n-1) + abs(1-m) + abs(i-n) + (j-1) + abs(i-1) + abs(j-m))) {
        max_dist = (long long)(n-1) + abs(1-m) + abs(i-n) + (j-1) + abs(i-1) + abs(j-m);
        x1 = n;
        y1 = 1;
        x2 = 1;
        y2 = m;
    }
    
    if (max_dist < ((long long)(n-n) + abs(1-m) + abs(i-n) + (j-1) + abs(i-n) + abs(j-m))) {
        max_dist = (long long)(n-n) + abs(1-m) + abs(i-n) + (j-1) + abs(i-n) + abs(j-m);
        x1 = n;
        y1 = 1;
        x2 = n;
        y2 = m;
    }
    
    if (max_dist < ((long long)(n-1) + abs(i-1) + abs(j-m) + abs(i-n) + abs(j-m))) {
        max_dist = (long long)(n-1) + abs(i-1) + abs(j-m) + abs(i-n) + abs(j-m);
        x1 = 1;
        y1 = m;
        x2 = n;
        y2 = m;
    }

    cout << x1 << " " << y1 << " " << x2 << " " << y2 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
*/
