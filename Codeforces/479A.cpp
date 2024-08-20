#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm> 

using namespace std;
using ll = long long;

void solve(){
    int a[3];
    for (int &x : a) cin >> x;
   	sort(a, a+3);
   	if (a[0] != 1){
   		cout << (a[0]*a[1])*a[2];
   	}
   	else if (a[0] == 1 && a[1] == 1 && a[2] == 1){
   		cout << a[0] + a[1] + a[2];
   	}
   	else{
   		cout << (a[0]+a[1])*a[2];
   	}
}

int main()
{
    solve();

    return 0;
}
