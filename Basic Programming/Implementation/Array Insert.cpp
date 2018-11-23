#include <iostream>
#include <vector>
typedef long long int lli;
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    int v[n];
    for(int i = 0; i < n; i++)
        cin >> v[i];

    for(int i = 0, a, x, y; i < q; i++){
        cin >> a >> x >> y;
        int sum = 0;

        if(a == 1){
            v[x] = y;
        }
        else if(a == 2){
            if(x >= 0 && y <= n){
                for(int j = x; j <= y; j++)
                    sum += v[j];
                cout << sum << endl;
            }
            else
                cout << -1 << endl;
        }
    }
    return 0;
}
