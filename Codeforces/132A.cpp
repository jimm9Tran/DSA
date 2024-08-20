#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm> 

using namespace std;
using ll = long long;

void solve(){
    ll x, y;
    cin >> x >> y;
    
    ll tmp = x%y;
    if (tmp == 0) cout << tmp << endl;
    else {
    	cout << y-tmp << endl;	
    }
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
