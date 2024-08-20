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
    ll a[n];
    ll b[n];
    for (ll &x : a) cin >> x;
    for (ll &x : b) cin >> x;

    int i = 0, j = 0;
	int dem = 0;
	while (j < n){
		if (a[i] > b[j]){
			dem++;
			j++;
		}else{
			i++;
			j++;
		}
	}
	cout << dem << endl;
	

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
