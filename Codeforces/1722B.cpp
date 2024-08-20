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

    string s1, s2;
    cin >> s1 >> s2;

    for (int i = 0; i < n; i++){
        if (s1[i] != s2[i]){
            if ((s1[i]=='G' && s2[i]=='B')||(s1[i]=='B' && s2[i]=='G')){
                    continue;
            }else{
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
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
