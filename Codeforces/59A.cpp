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
    int cntL(0), cntU(0);
    for (char x : s){
    	if (isupper(x)){
    		cntU++;
    	}else cntL++;
    }

    if (cntL>=cntU){
    	transform(s.begin(),s.end(),s.begin(),::tolower);
    }
    else{
    	transform(s.begin(),s.end(),s.begin(),::toupper);
    }
    

    cout << s;
}

int main()
{
    solve();

    return 0;
}
