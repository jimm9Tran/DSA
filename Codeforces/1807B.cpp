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
    int a[n];
    int M = 0, B = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (a[i]%2 == 0){
            M+=a[i];
        }
        else{
            B+=a[i];
        }
    }
    if (M>B) cout << "YES" << endl;
    else cout << "NO" << endl;
    
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
