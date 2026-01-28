#include <iostream>
using namespace std;

int main() {
    long long n, a = 0, b = 1, c;
    cin >> n;

    if (n <= 2) cout << n - 1 << endl;
    else {
        for(int i = 3; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        cout << c << endl;
    }
}