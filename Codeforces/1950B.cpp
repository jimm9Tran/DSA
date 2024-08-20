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
    for (int i = 0; i < 2*n; i++){
        for (int j = 0; j < 2*n; j++){
            if(i/2 + j/2 & 1) cout << '.';
            else cout << '#';
        }
        cout << endl;
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
