#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm> 

using namespace std;
using ll = long long;

int const maxf = 100001;
ll A[maxf], dp[maxf];
int n;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++){
    	cin >> A[i];
    }
    for (int i = 1; i <= n; i++) dp[i] = 1;
    int ans = 1, dem = 1;
    for (int i = 2; i <= n; i++){
    	if (A[i-1] <= A[i]){
    		dem++;
    		ans = max(ans, dem);
    	}else{
    		dem = 1;
    	}
    }

    cout << ans;
    return 0;
}
