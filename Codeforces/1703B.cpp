#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm> 
#include <map>

using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;

    map<char, int> mp;
    for (int i = 0; i < n; i++){
        mp[s[i]]++;
    }

    for (auto it = mp.begin(); it != mp.end(); it++){
        ans+=it->second+1;
    }
    cout << ans << endl;
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
