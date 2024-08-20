#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm> 

using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<ll> vl(n);
    for (ll &x : vl){
        cin >> x;
    }

    sort(vl.begin(), vl.end());
    for (int i = 1; i < n; i++){
        if (vl[i] == vl[i-1]){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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
