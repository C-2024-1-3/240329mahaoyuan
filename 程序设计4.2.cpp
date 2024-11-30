#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int parseHex(string hexString) {
    int decimalValue = 0;
    int length = hexString.length();
    for (int i = 0; i < length; ++i) {
        char currentChar = hexString[i];
        int digitValue;
        if (isdigit(currentChar)) {
            digitValue = currentChar - '0';
        }
        else if (isupper(currentChar)) {
            digitValue = currentChar - 'A' + 10;
        }
        else if (islower(currentChar)) {
            digitValue = currentChar - 'a' + 10;
        }
        else {
            return -1;
        }
        decimalValue = decimalValue * 16 + digitValue;
    }
    return decimalValue;
}

int main() {
    string p;
    cin >> p;
    cout<<parseHex(p);
    
    return 0;
}