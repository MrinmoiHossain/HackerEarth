#include <iostream>
using namespace std;

int main()
{
    int n;
    bool b = 1;
    
    while(cin >> n){
        if(n == 42)
            b = 0;
            
        if(b)
            cout << n << endl;
    }
    return 0;
}

