#include <bits/stdc++.h>
using namespace std;
     
int main()
{
	string s;
	cin >> s;
        
	for(int i = 0; i < s.length(); i++){
		if(s[i] >= 'A' and s[i] <= 'Z')
        	s[i] = s[i] + 32;
		else
			s[i] = s[i] - 32;
	}       
	cout << s << endl;
        
	return 0;
}
