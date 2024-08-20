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
    string s;
    string s1;
    cin >> s >> s1;
    if (s.size()!=s1.size()){
    	cout << "NO";
    }
    else{
    	int tmp = s.size()-1;
    	for (int i = 0; i < s.size(); i++){
    		if (s[i] == s1[tmp]){
    			tmp--;
    		}else{
    			cout << "NO";
    			return 0;
    		}
    	}

    	cout << "YES";
    }
    return 0;
}
