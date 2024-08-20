#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm> 

using namespace std;
using ll = long long;

void solve(){
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int &x : a) cin >> x;

    ll ans = 0;
	for (int x : a){
		if (x <= m) ans += 1;
		else ans += 2;
	}

	cout << ans;
}

int main()
{
    solve();

    return 0;
}
