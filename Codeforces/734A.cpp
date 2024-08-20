#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm> 

using namespace std;
using ll = long long;

void solve(){
	int n; cin >> n;
    string s;
    cin >> s;
    int demA = 0, demD = 0;
    for (char c : s){
    	if (c == 'A') demA++;
    	if (c == 'D') demD++;
    }

    if (demA > demD) cout << "Anton";
    else if (demD > demA) cout << "Danik";
    else cout << "Friendship";
}

int main()
{
    solve();
    

    return 0;
}
