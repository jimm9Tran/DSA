#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm> 

using namespace std;
using ll = long long;

void solve(){
    
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    int ans = 0;
	for (int x : a){
		if (x > 0) ans++;
	}

    if (ans >0){
    	cout << "HARD";
    }else{
    	cout << "EASY";
    }
    return 0;
}
