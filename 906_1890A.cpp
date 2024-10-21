#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin >>n;
        vector <int> v;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        vector y = unique(v)
        if (y.size()>2){
            cout<<"No"<<'\n';
        }else if(abs(v.count(y[0])-v.count(y[1])))>=2{
            cout<<"No"<<'\n';
        }else{
            cout<<'Yes'<<'\n';
        }
        }

    }
//crct it