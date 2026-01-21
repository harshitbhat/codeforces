#include <iostream>
#include <vector>

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
            bool isSorted = true;
            for(int i = 1; i < n; i++) {
                if(arr[i] < arr[i - 1]) {
                    isSorted = false;
                    break;
                }
            }

            cout << (isSorted ? "YES" : "NO") << endl;
        }
    }
}