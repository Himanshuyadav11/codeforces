#include<bits/stdc++.h>
using namespace std;
bool isUnimodal(vector<int> &v,int n){
    int mx = 0;
    for (int i = 1; i < n; i++) {
        if (v[i] > v[mx]) mx = i;
    }

    for (int i = 1; i < mx; i++) {
        if (v[i] < v[i - 1]) return false;
    }

    for (int i = mx + 1; i < n; i++) {
        if (v[i] > v[i - 1]) return false;
    }

    return true;
}
int main(){
    int n;
    vector<int> v;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    if(isUnimodal(v,n)) cout<<"yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
