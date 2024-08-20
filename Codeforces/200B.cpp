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
    ll n; 
    cin >> n;
    int a[n];
    double ans = 0;
    for (int &x : a){
    	cin >> x;
    	ans += 1.0*x/100;
    }

    cout << ans/n*100;
    
	

    return 0;
}
