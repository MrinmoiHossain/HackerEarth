#include <iostream>
typedef long long int ll;
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    ll a, f = 0, s = 1, cf = 0, cs = 0, ct = 0;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(i == f){
            cf += a;
            f += 3;
        }
        else if(i == s){
            cs += a;
            s += 3;
        }
        else
            ct += a;
    }
    
    cout << cf << " " << cs << " " << ct << endl;
    
    return 0;
}

