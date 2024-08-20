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
    ll t, x(0); 
    cin >> t;
    while (t--){   
        string s;
        cin >> s;
        if (s[1] == '+'){
            x++;
        }else{
            x--;
        }
    }

    cout << x;
    return 0;
}
