/*
Author: Javier Villarreal
Professor: Hwang
Last Updated 9/23/18

The purpose of this program is to


*/

#include <iostream>

using namespace std;

int main()
{
    int number;
    bool boolval = true;
    char character;
    short shortnum;
    long longnum;
    float floatnum;
    double doublenum;
    double doublearr[5];
    int integerarr[5];
    int *ptr1;
    double *ptr2;

    cout << "Enter an integer: ";
    cin >> number;
    cout << "The value of the integer number is: " << number << endl;
    cout << "The address of the integer number is: " << &number << endl;
    cout << "The size of the integer number is: " << sizeof(number) << endl;

    cout << endl;

    cout << "The value of the boolean variable is: " << boolval << endl;
    cout << "The address of the boolean variable is: " << &boolval << endl;
    cout << "The size of the boolean variable is:" << sizeof(boolval) << endl;

    cout << endl;

    cout << "Enter a character: ";
    cin >> character;
    cout << "The value of the char variable is: " << character << endl;
    cout << "The address of the char variable is: " << &character << endl;
    cout << "The size of the char variable is:" << sizeof(character) << endl;

    cout << endl;

    cout << "Enter a short integer: ";
    cin >> shortnum;
    cout << "The value of the short variable is: " << shortnum << endl;
    cout << "The address of the short variable is: " << &shortnum << endl;
    cout << "The size of the short variable is:" << sizeof(shortnum) << endl;

    cout << endl;

    cout << "Enter a long integer: ";
    cin >> longnum;
    cout << "The value of the long variable is: " << longnum << endl;
    cout << "The address of the long variable is: " << &longnum << endl;
    cout << "The size of the long variable is:" << sizeof(longnum) << endl;

    cout << endl;

    cout << "Enter a float value: ";
    cin >> floatnum;
    cout << "The value of the float variable is: " << floatnum << endl;
    cout << "The address of the float variable is: " << &floatnum << endl;
    cout << "The size of the float variable is:" << sizeof(floatnum) << endl;

    cout << endl;

    cout << "Enter a double value: ";
    cin >> doublenum;
    cout << "The value of the double variable is: " << doublenum << endl;
    cout << "The address of the double variable is: " << &doublenum << endl;
    cout << "The size of the double variable is:" << sizeof(doublenum) << endl;

    cout << endl;

    cout << "Enter 5 values for a double array: ";
    for (int i=0; i<=4; i++) //i is a counter variable
    {
        cin >> doublearr[i];
    }
    cout << "The first element of the double array is: " << doublearr[0] << endl;
    cout << "The address of the boolean variable is: " << &doublearr[0] << endl;
    cout << "The size of the boolean variable is: " << sizeof(doublearr[0]) << endl;

    cout << endl;

    cout << "Enter 5 values for an integer array: ";
    for (int i=0; i<=4; i++) //i is a counter variable
    {
        cin >> integerarr[i];
    }
    cout << "The values of all the elements in the integer array are: " << endl;
    for (int i=0; i<4; i++) //i is a counter variable
    {
        cout << integerarr[i] << ", ";
    }
    cout << endl;
    cout << "The addresses of all the elements in the integer array are: " << endl;
    for(int i=0; i<4; i++) //i is a counter variable
    {
        cout << &integerarr[i] << ", ";
    }
    cout << endl;
    cout << "The size of the integer array is:" << sizeof(integerarr) << endl;

    cout << endl;

    cout << "The value of the integer pointer variable is: " << ptr1 << endl;
    cout << "The address of the integer pointer variable is: " << &ptr1 << endl;
    cout << "The size of the integer pointer variable is: " << sizeof(ptr1) << endl;

    cout << endl;

    cout << "The value of the double pointer variable is: " << ptr2 << endl;
    cout << "The address of the double pointer variable is: " << ptr2 << endl;
    cout << "The size of the double pointer variable is: " << sizeof(ptr2) << endl;

    return 0;
}

