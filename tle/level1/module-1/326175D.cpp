#include <iostream>
using namespace std;

bool isPossible(long long op, long long d) {
    return op == d;
}

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    bool ans = isPossible(a + b - c, d) || 
                isPossible(a + b * c, d) || 
                isPossible(a - b + c, d) ||
                isPossible(a - b * c, d) ||
                isPossible(a * b + c, d) ||
                isPossible(a * b - c, d);
    cout << (ans ? "YES" : "NO") << endl;

}