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
    
   	while (m--){
   		int tmp = n % 10;
   		if (tmp != 0) n--;
   		else{
   			n /= 10;
   		}
   	}

   	cout << n;
    return 0;
}
	