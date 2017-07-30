#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define M 1000

vector<bool> prime(M, 1);

void Prime()
{
    int limit = sqrt(M);
    prime[0] = prime[1] = 0;

    for(int i = 4; i <= M; i += 2) prime[i] = 0;
    
    for(int i = 3; i <= M; i += 2){
        if(prime[i]){
            if(i <= limit)
                for(int j = i * i; j <= M; j += i + i)
                    prime[j] = 0;
        }
    }
}

int main()
{
    Prime();
    int n;
    cin >> n;
    
    for(int i = 2; i <= n; i++)
        if(prime[i])
            cout << i << " ";
    cout << endl;
    
    return 0;
}

