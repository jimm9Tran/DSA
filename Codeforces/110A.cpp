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
   	ll x;
   	cin >> x;
   	while (x){
   		int n = x % 10;
   		if (n != 4 || n != 7){
   			cout << "NO";
   			return 0;
   		}
   		n/=10;
   	}

   	cout << "YES";

    return 0;
}
