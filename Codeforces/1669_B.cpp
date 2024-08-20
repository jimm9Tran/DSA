#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm> 

using namespace std;
using ll = long long;

int main()
{
    ll t; 
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll &x : a) cin >> x;
        
        sort(a.begin(), a.end());
        
        ll ans = -1;
        for (ll i = 2; i < n; i++){
            if (a[i] == a[i-2] && a[i] == a[i-1]){
                ans = a[i];
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
