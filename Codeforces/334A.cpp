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
    string s[n];
    int dem = 0;
    for (string &x : s) cin >> x;
    for (int i = 1; i <= n; i++){
    	if (s[i][0] == '1' && s[i-1][1] == '1'){
    		dem++;
    	}else if (s[i][0] == '0' && s[i-1][1] == '0'){
    		dem++;
    	}
    }
    cout << dem;
}

int main()
{
    solve();

    return 0;
}
