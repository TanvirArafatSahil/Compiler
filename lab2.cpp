/*1.	Write a program to determine whether the Given Input is Numeric Constant or Not. 
e.g. (if 100, 991, 1810 etc are given as an input , then the program says “numeric constant”, or if we take input as “ABCD”, “A1B2”, then the program will say that this is “not numeric”).*/

#include <iostream>
#include<string>

using namespace std;

int check_number(const string& input) {
   for (char i : input){
   if (i < '0' || i > '100'){
      return 1;
}}
return 0;
}

int main()
{
    string givenInput;
    cout<< " Enter input: ";
    cin >>givenInput;


    if (check_number(givenInput)){
        cout << "Numeric constant." << endl;
    }else{
        cout << "Not numeric." << endl;
    }


    return 0;
}



/*2.	Write a program to determine whether the Given Input is Operators or Not. (Arithmetic Operators +, -, *, /, %, =)
e.g., 2+3=5
Ans: 
operator1:  + 
operator2:  =*/ 

#include <iostream>
#include<string>

using namespace std;

int check_operator(char i) {
   return i == '+' || i == '-' || i == '*' || i == '/' || i == '%';

}

int main()
{
    string givenInput;
    cout<< " Enter input: ";
    cin >>givenInput;


        cout << "Operator:" << endl;
            for (char i : givenInput){
                    if (check_operator(i)){
                cout << i << " ";

    }
    }

    return 0;
}



/*3.	Write a program to determine whether the Given Input is Comment line(s) or Not.
e.g.
//single line comment

/* multiple line   
Comment */

#include <iostream>
#include<string>

using namespace std;

 int main (){
      string givenInput;
    cout<< " Enter input: ";
    cin >>givenInput;

    if (givenInput.find("//") == 0)
    {
        cout << "Single line comment.";
    }

    else if (givenInput.find("/*") == 0 && givenInput.find("*/")!= 0)
        {
        cout << "Multiline comment.";
    }
    else {
        cout << "Not a comment.";
    }
 return 0;
 }
