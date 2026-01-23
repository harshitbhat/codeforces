#include <iostream>
using namespace std;

int main() {
    long a, b;
    cin >> a >> b;
    bool is_multiple = a % b == 0 || b % a == 0;
    cout << (is_multiple ? "Multiples" : "No Multiples") << endl;
}