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
    string s;
    cin >> s;
    int i = 0, j = 1;
    int dem = 0;
    while (j < n || i < n){
    	if (s[i] == s[j]){
    		i++;
    		j++;
    		dem++;
    	}
    	else{
    		i++;
    		j++;
    	}
    }

    cout << dem;
    return 0;
}
	