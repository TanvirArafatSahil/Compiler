#include<iostream>
#include<string>
using namespace std;
bool isValidIdentifier(string input, int& invalidIndex)
{
 if (!((input[0] >= 'a' && input[0] <= 'z') || (input[0] >= 'A' && input[0] <= 'Z') || input[0] == '_'))
 {
 invalidIndex = 0;
 return false;
 }
 for (int i = 1; i < input.length(); i++)
 {
 if (!((input[i] >= 'a' && input[i] <= 'z')
 || (input[i] >= 'A' && input[i] <= 'Z')
 || (input[i] >= '0' && input[i] <= '9')
 || input[i] == '_'))
 {
 invalidIndex = i;
 return false;
 }
 }
 return true;
}
int main()
{
 string userInput;
 int invalidIndex = 0;
 cout << "Enter input: ";
 getline(cin, userInput);
 if (isValidIdentifier(userInput, invalidIndex))
 cout << "Valid identifier.";
 else
 cout << "Invalid identifier at index " << invalidIndex;
 return 0;
}
