#include <iostream>
using namespace std;

int main() {
    int T, x, y;

    cin >> T;

    while(T --) {
        cin >> x >> y;
        cout << (y >= -1 ? "YES" : "NO") << endl;
    }
}