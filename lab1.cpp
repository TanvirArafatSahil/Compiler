//1.	Find the average value of the elements of an array.

#include<iostream>
using namespace std;

int main(){
int x, i;
float num[5], sum, average;

cout << "Enter the size of the array : ";
cin >> x;
cout << "Enter the values of the array : ";
for(i = 0; i < x; ++i)
    {
        cin >> num[i];
        sum += num[i];
    }

    average = sum / x;
    cout<<"Average = " << average;

    return 0;
}



///2.	Find the minimum and maximum value of the elements of an array.

#include<iostream>
using namespace std;

int main ()
{
    int arr[10], n, i, max, min;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the elements of the array : ";
    for (i = 0; i < n; i++)
        cin >> arr[i];

    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }

    min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }

    cout << "Maximum value of the array : " << max<< endl;
    cout << "Minimum value of the array : " << min;
    return 0;
}


/*3.	Take two strings as your first and last name, then concatenate the two strings together so that you can find your full name:
e.g. First name = “XX” and Lastname = “YY”
output: full name = “XX YY”*/

#include <iostream>
using namespace std;

int main()
{
    string s1, s2, name;

    cout << "Enter your first name: ";
    cin>> s1;

    cout << "Enter your last name: ";
    cin>>s2;

    name = s1 + " " + s2;

    cout << "Your full name:  "<< name;

    return 0;
}


//4.	Write a program to calculate the factorial of a given numbers (using loop):

#include <iostream>
using namespace std;

int calculateFactorial(int n) {
   {
    if (n == 0)
        return 1;
    int i = n, factorial = 1;
    while (n / i != n) {
        factorial = factorial * i;
        i--;
    }
    return factorial;
}
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial cannot be calculated for negative numbers." <<endl;
    } else {
        int result = calculateFactorial(number);
        cout << "Factorial is: " << result << endl;
    }

    return 0;
}



