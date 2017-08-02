#include <iostream>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    
    int con = 0;
    for(int i = 0; i < s.length(); i++)
        if(s[i] == ' ')
            con++;
            
    cout << con << endl;
    
    return 0;
}

