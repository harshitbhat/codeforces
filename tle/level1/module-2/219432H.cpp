#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    bool is_prime = true;

    cin >> n;

    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            is_prime = false;
            break;
        }
    }

    cout << (is_prime ? "YES": "NO") << endl;
}