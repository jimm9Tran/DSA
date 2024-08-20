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
    vector<int> vi(n);
    for (int &x : vi) cin >> x;

    sort(vi.begin(), vi.end());
    vi[0]++;
    int ans = 1;
    for (int x : vi) ans *= x;
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
