#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n;

    int even = 0, odd = 0, positives = 0, negatives = 0;

    for(int i = 0; i < n; i++) {
        cin >> x;
        if (x % 2  == 0) {
            even++;
        } else {
            odd++;
        }

        if(x > 0) {
            positives++;
        } else if (x < 0) {
            negatives++;
        }
    }

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << positives << endl;
    cout << "Negative: " << negatives << endl;

}