#include <iostream>
#include <string>

using namespace std;

int main() {
    int T, n;
    string str;
    cin>>T;
    while(T--) {
        cin >> n;
        cin >> str;
        int blocked = 0;
        bool isSpace = false;
        for(int i = 0; i < n; i++) {
            if (str[i] == '.') {
                if (i + 1 < n && i + 2 < n && str[i + 1] == '.' && str[i + 2] == '.') {
                    isSpace = true;
                }
            } else {
                blocked++;
            }
        }

        if(isSpace) {
            cout << 2 << endl;
        } else {
            cout << n - blocked << endl;
        }
    }
}