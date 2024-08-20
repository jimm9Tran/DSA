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

    int ans = 0;
    int res = 0;

    for (int i = 0; i < n; i++){
    	int x, y;
    	cin >> x >> y;
    	res -= x;
    	res += y;

    	ans = max(ans, res);
    }

    cout << ans;
}

int main()
{
    solve();
    return 0;
}
