#include <iostream>
#include <cctype>
using namespace std;

int main() {
    int T, n;

    cin >> T;

    while(T--) {
        cin >> n;
        string str;

        cin >> str;
        bool is_meow = str[0] == 'M' || str[0] == 'm';
        int i = 1;
        char prev = 'm';

        while(is_meow && i < n) {
            char current = tolower(str[i]);
            if(current != prev) {
                if(prev == 'm' && current == 'e') {
                    prev = 'e';
                } else if(prev == 'e' && current == 'o') {
                    prev = 'o';
                } else if(prev == 'o' && current == 'w') {
                    prev = 'w';
                } else {
                    is_meow = false;
                }
            } 

            i++;
        }

        if(i != n || prev != 'w') is_meow = false;

        cout << (is_meow ? "YES" : "NO") << endl;
    }
}