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
    
    int n, m;
    cin >> n >> m;
    int i = 0;
    while (n <= m){
        n*=3;
        m*=2;
        i++;
    }

    cout << i;

    return 0;
}
