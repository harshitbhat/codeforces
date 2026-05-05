#include <iostream>
using namespace std;

int main() {
    int n, x;
    bool isHard = false;

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x;
        if(x == 1) {
            isHard = true;
        }
    }

    cout << (isHard ? "HARD" : "EASY") << endl;

}