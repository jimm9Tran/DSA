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
    cin >> s;

    int arr[1001];
    int cnt = 0;

    for (int i = 0; i < s.size(); i++){
        if (s[i] == '+') continue;
        else{
            arr[cnt++] = s[i] - '0';
        }
    }

    sort(arr,arr+cnt);

    for (int i = 0; i < cnt; i++){
        cout << arr[i];
        if (i == cnt-1) break;
        cout << "+";
    }

    return 0;
}
