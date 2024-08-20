#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main()
{
    string s;
    cin >> s;
    int ans = 0;
    for (char x : s){
        if (x-'0' > ans){
          ans = x;  
        }
    }

    cout << ans;

    return 0;
}
