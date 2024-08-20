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
    vector<ll> vi(n);
    for (ll &x : vi) cin >> x;
    ll ans=0;
    sort(vi.begin(), vi.end());
    for (int i = 1; i < n; i++){
        if (vi[i] > vi[0]){
            ans += vi[i] - vi[0];
        }
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
