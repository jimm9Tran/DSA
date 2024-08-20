#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm> 

using namespace std;
using ll = long long;

void solve(){
    string s;
    cin >> s;

    string ans = "hello";
    int indexAns = 0;

    for (char c : s){
    	if (c == ans[indexAns]){
    		indexAns++;
    	}

    	if (indexAns == (ans.size())){
    		cout << "YES";
    		return;
    	}
    }

    cout << "NO";
}

int main()
{
    solve();

    return 0;
}
