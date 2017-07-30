#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    
    vector<int> v(10, 0);
    for(int i = 0; i < s.length(); i++){
        v[s[i] - '0']++;
    }
    for(int i = 0; i < 10; i++)
        cout << i << " " << v[i] << endl;
        
    return 0;
}

