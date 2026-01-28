#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n), b(n);

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());


    bool is_permutation = true;

    for(int i = 0; i < n; i++) {
        if(a[i] != b[i]) {
            is_permutation = false;
        }
    }

    cout << (is_permutation ? "yes" : "no") << endl;

}