#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int l, r, k;
    cin >> l >> r >> k;
    
    if(r < l)
        swap(l, r);
    
    int con = 0;
    for(int i = l; i <= r; i++)
        if(i % k == 0)
            con++;
            
    cout << con << endl;
    
    return 0;
}

