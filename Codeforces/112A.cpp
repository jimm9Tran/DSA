#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>
#include <bits/stdc++.h> 

using namespace std;
using ll = long long;

void solve(){
    string s1, s2;
    cin >> s1 >> s2;

    transform(s1.begin(), s1.begin(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.begin(), s2.begin(), ::tolower);
    int i = strcmp(s1,s2);
    if (i == 0){
    	cout << "0";
    }else if (i < 0){
    	cout << "-1";
    }else if (i > 0){
    	cout << "1";
    }
}

int main()
{
	solve();

    return 0;
}
