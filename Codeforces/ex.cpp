#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm> 

using namespace std;
using ll = long long;

ll C(int k, int n) {
    if (k == 0 || k == n) return 1;
    if (k == 1) return n;
    // c(k,n) == c(k-1,n-1) + c(k,n-1);
    
    return C(k - 1, n - 1) + C(k, n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << C(3,n);

    return 0;
}
