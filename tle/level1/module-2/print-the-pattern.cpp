#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x = 1;

    for(int i = 0; i < n; i++) {
        if(i % 2 != 0) {
            for(int j = 0; j <= i; j++) {
                cout << x++ << " ";
            }
            x = x + i + 1;
        } else {
            for(int j = i; j >= 0; j--) {
                cout << x-- << " ";
            }
            x = x + i + 2;
        }
        cout << endl;
    }
}