/*4.	Write a program to determine whether the Given Input is Identifier or Not. []
Conditions/convention to detect identifier:
a)	The first character should be alphabet characters/underscore (A-Z, a-z, _)
b)	From the Second character should be alpha-numeric characters/underscore (A-Z, a-z, _ , 0-9)*/

#include <iostream>

using namespace std;

bool isValidIdentifier(const string& str) {
    if(str.empty())
        return false;

    if (!(str[0] >= 'A' && str[0] <= 'Z') &&
        !(str[0] >= 'a' && str[0] <= 'z') &&
        str[0] != '_') {
        return false;
    }

    for(int i = 1; i < str.size(); i++) {
        if (!(str[i] >= 'A' && str[i] <= 'Z') &&
            !(str[i] >= 'a' && str[i] <= 'z') &&
            !(str[i] >= '0' && str[i] <= '9') &&
            str[i] != '_') {
            return false;
        }
    }

    return true;
}

int main() {
    string identifier;
    cout << "Enter a string to check: ";
    cin >> identifier;
    bool isValid = isValidIdentifier(identifier);

    if(isValid) {
        cout << "Given input is a valid identifier.";
    } else {
        cout << "Given input is not a valid identifier.";
    }

    return 0;
}
