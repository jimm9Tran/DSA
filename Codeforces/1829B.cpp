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
    int a[n];
    for (int &x : a);
    int i = 0, j = 1;
    int cnt = 0;
    for (int i = 0; i < n; i++){
        if (a[i] == 0){
            cnt++;
            if (ans <= cnt) ans = cnt;
        }
        else{
            cnt = 0;
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
