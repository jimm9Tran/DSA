#include<bits/stdc++.h>

using namespace std;
using ll = long long;

bool check(int n){
    set<int> se;
    while(n){
        se.insert(n%10);
        n/=10;
    }
    if (se.size()==4){
        return true;
    }else{
        return false;
    }
}

int main(){
    int n; cin >> n;
    for (int i = n+1; i <=90000; i++){
        if (check(i)){cout << i; break;}
    }
    

    return 0;
}