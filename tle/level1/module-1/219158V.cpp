#include <iostream>
using namespace std;

int main() {
    int a, b;
    char ch;

    cin >> a >> ch >> b;

    if(a == b) {
        cout << (ch == '=' ? "Right" : "Wrong") << endl;
    } else if (a > b) {
        cout << (ch == '>' ? "Right" : "Wrong") << endl;
    } else {
        cout << (ch == '<' ? "Right" : "Wrong") << endl;
    }
}