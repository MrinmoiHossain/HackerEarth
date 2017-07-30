#include <iostream>
using namespace std;

int main()
{
    int l, n;
    cin >> l;
    cin >> n;
    
    for(int i = 0, w, h; i < n; i++){
        cin >> w >> h;
        
        if(l > w or l > h)
            cout << "UPLOAD ANOTHER" << endl;
        else{
            if(w == h)
                cout << "ACCEPTED" << endl;
            else
                cout << "CROP IT" << endl;
        }
            
    }
    
    return 0;
}

