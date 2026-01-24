#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T, n, k;

    cin >> T;

    while(T--) {
        cin >> n >> k;
        int ans = 1;
        vector<vector<char> > arr(n, vector<char>(k));
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < k; j++) {
                cin >> arr[i][j];
            }
        }

        for(int i = 1; i < n; i++) {
            bool is_same = true;
            for(int j = 0; j < k; j++) {
                if(arr[i][j] != arr[0][j]) {
                    is_same = false;
                    break;
                }
            }

            if(is_same) ans++;
        }

        cout << ans << endl;

    }
}