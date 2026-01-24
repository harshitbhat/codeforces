#include <iostream>
using namespace std;

int main() {
    int T, n;
    cin >> T;
    while(T--) {
        cin >> n;
        cout << (n % 3 == 0 ? "Second" : "First") << endl;
    }
}