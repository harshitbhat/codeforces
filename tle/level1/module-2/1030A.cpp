#include <iostream>
using namespace std;

int main() {
    int n, x;
    bool is_hard = false;

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x;
        if(x == 1) {
            is_hard = true;
        }
    }

    cout << (is_hard ? "HARD" : "EASY") << endl;
}