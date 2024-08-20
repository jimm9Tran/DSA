#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm> 

using namespace std;
using ll = long long;

void solve(){
    
}

int main()
{
    
    ll k, n, w;
    cin >> k >> n >> w;

    ll ans = 0;
    for (int i = 1; i <= w; i++){
    	ans += k*i;
    }

    if (ans <= n) {
    	cout << "0";
    }else{
    	cout << ans - n;
    }

    return 0;
}
