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
    int dem = 0;
    while (n--){
    	int x, y;
    	cin >> x >> y;
    	if (y - x >= 2) dem++;
    }

    cout << dem;
}

int main()
{
    solve();

    return 0;
}
