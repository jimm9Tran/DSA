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
    ll tong = 0;
    for (int &x : a){
    	cin >> x;
    	tong += x;
    }
    int dem = 0;
    ll tong2 = 0;
    sort(a, a+n);
    for (int i = n-1; i >= 0; i--){
    	tong2 += a[i];
    	dem++;
    	tong -= a[i];
    	if (tong2 > tong){
    		break;
    	}
    }
    cout << dem;
    return 0;
}
