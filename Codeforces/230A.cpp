#include <cmath>
#include <iostream>
#include <bits/stdc++.h>

using ll = long long;
using namespace std;

int main()
{
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> vp;
    for (int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        vp.push_back({x,y});
    }

    sort(vp.begin(), vp.end());
    ll ans = 0;
    for (auto it : vp){
        if (it.first >= s){
            cout << "NO";
            return 0;
        }else{
            s += it.second;
        }
    }

    cout << "YES";
    return 0;
}