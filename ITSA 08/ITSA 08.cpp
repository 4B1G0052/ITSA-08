#include <iostream>  
using namespace std;
int main()
{
    int n;
    int primes[100] = { 0 };
    cin >> n;
    int i;
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            break;
        }
    }
    if (i == n) {
        cout<<"YES"<<endl;
    }
    else {
        cout << "NO" << endl;
    }
}