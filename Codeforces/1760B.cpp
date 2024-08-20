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
    string s;
    cin >> s;
    int ans = 0;
    char c='a';
    for (int i=0; i < n; i++){
        if(s[i]>c)
           c = s[i];
       }
    cout <<abs(97-c)+1<<endl;
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
