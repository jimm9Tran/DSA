#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

map<string , int> mp;
void solve(){
    string s;
    cin >> s;
    if (mp[s] == 0)cout << "OK" << endl;
    else{
    	cout << s  << mp[s] << endl;
    }
    mp[s]++;
}

int main()
{
    ll t; 
    cin >> t;
    while (t--){   
        solve();
    }

    return 0;
}
