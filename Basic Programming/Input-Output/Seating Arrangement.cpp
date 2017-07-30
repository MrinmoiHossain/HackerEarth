#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    
    for(int i = 0, n; i < T; i++){
        cin >> n;
        
        int d = n / 6;
        int f = n % 6;
        
        switch(f){
            case 0:
                if(d & 1)
                    cout << n + 1;
                else
                    cout << n - 11;
                break;
            case 1:
                if(d & 1)
                    cout << n - 1;
                else
                    cout << n + 11;
                break;
            case 2:
                if(d & 1)
                    cout << n - 3;
                else
                    cout << n + 9;
                break;
            case 3:
                if(d & 1)
                    cout << n - 5;
                else
                    cout << n + 7;
                break;
            case 4:
                if(d & 1)
                    cout << n - 7;
                else
                    cout << n + 5;
                break;
            case 5:
                if(d & 1)
                    cout << n - 9;
                else
                    cout << n + 3;
                break;
        }
        
        switch(f){
            case 0:
            case 1:
                cout << " WS" << endl;
                break;
            case 2:
            case 5:
                cout << " MS" << endl;
                break;
            case 3:
            case 4:
                cout << " AS" << endl;
                break;
        }
    }
    
    return 0;
}

