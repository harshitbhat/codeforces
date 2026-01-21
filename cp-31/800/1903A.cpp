#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()  {
    long T, n, k;

    cin >> T;
    while(T--) {
        cin >> n >> k;
        vector<int> arr(n);

        for(int i = 0; i < n; i++) cin >> arr[i];

        if (k >= 2) {
            cout << "YES" << endl;
        } else {
            cout << (is_sorted(arr.begin(), arr.end()) ? "YES" : "NO") << endl;
        }
    }
}