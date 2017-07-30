#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string a, b;
    cin >> a;
    b = a;
    reverse(a.begin(), a.end());
    
    cout << (a == b ? "YES" : "NO") << endl;
    
    return 0;
}

