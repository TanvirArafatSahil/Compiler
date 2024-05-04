#include <iostream>
#include <fstream>
#include <string>
#include <unordered_set>

using namespace std;

// Function for checking keyword
bool isKeyword(const string& word) {

    static const unordered_set<string> keywords = {"int", "if", "else", "while", "for", "namespace", "using", "return", "cout"};
    return keywords.find(word) != keywords.end();
}

// Function for checking operators
bool isOperator(const string& op) {

    static const unordered_set<string> operators = {"+", "-", "/", "*", "=", "==", "<<", ">>"};
    return operators.find(op) != operators.end();
}

int main() {
    ifstream file("lex.txt");
    string line;

    while (getline(file, line)) {
        size_t pos = line.find("#include");

        if (pos != string::npos) {

            cout << line.substr(pos) << " : this is a header" << endl;
        }

        pos = line.find("using namespace");
        if (pos != string::npos) {

            cout << line.substr(pos) << " : this is a 'namespace' directory" << endl;
        }




        string token;
        for (size_t i = 0; i < line.size(); ++i) {
            if (line[i] == ' ' || line[i] == ';' || line[i] == '(' || line[i] == ')' || line[i] == '{' || line[i] == '}') {
                if (!token.empty()) {
                    if (isKeyword(token)) {
                        cout << token << " : this is a keyword" << endl;
                    } else if (isOperator(token)) {
                        cout << token << " : this is a operator" << endl;
                    } else {
                        cout << token << " : this is a variable or number" << endl;
                    }
                    token.clear();
                }
            } else {
                token += line[i];
            }
        }
    }

    return 0;
}
