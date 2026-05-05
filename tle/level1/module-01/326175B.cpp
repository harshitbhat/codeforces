#include <iostream>
using namespace std;

int main() {
    long long m, n, k;

    cin >> m >> n >> k;

    if(m % k == 0 && n % k == 0) {
        cout << "Both" << endl;
    } else if (m % k == 0) {
        cout << "Memo" << endl;
    } else if (n % k == 0) {
        cout << "Momo" << endl;
    } else {
        cout << "No One" << endl;
    }
}