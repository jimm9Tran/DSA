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
    int n,x;
    cin >> n >> x;
    int a[n];
    for (int &x : a) cin >> x;
    int dem = 0;
    for (int i = 0; i < n; i++){
        if (a[i] > 0 && a[i] >= a[x]) dem++;
    }

    cout << dem;
    return 0;
}
