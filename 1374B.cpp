/*#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int x = 0; // Initialize x to 0
    while (true) {
        if (n == 1) {
            break;
        }
        if (n % 3 != 0) {
            cout << -1 << endl;
            return;
        }
        else if (n % 2 == 0) {
            n = n / 6;
            x++;
        } else {
            n = n/3;
            x += 2;
        }
    }
    cout << x << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}*/

#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >>n;
    int x=0;
    while(1){
        if (n==1){
            break;
        }
        if (n%3!=0){
            cout << -1 << endl;
            return;
        }
        else if (n%2==0){
            n = n/6;
            x++;
        }
        else{
            n = n/3;
            x=x+2;
        }
    }
    cout << x<<endl;
}
int main(){
    int t;
    cin >>t;
    while (t--){
        solve();
    }
}