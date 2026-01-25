#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T, n, k;
    cin >> T;

    while(T--) {
        cin >> n;
        
        vector<int> v(n);
        
        for(int i = 0; i < n; i++) {
            cin >>v[i];
        }

        cout << (v[0] == 1 ? "YES" : "NO") << endl;
    }
}