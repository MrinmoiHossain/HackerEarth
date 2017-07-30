#include <iostream>
using namespace std;
typedef long long int ll;
#define MOD 1000000007

int main()
{
    int n;
    cin >> n;
    
    ll ans = 1;
    for(int i = 0, a; i < n; i++){
        cin >> a;
        ans = (ans * a) % MOD;
    }
    
    cout << ans << endl;
    
    return 0;
}

