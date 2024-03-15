#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    string result;
    for (char c : s) {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c!='y' &&
            c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U' && c!='Y') {
            result += '.';
            result += tolower(c);
        }
    }
    cout << result << endl;
    return 0;
}
