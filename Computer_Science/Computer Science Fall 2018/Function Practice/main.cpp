#include <iostream>

using namespace std;

void showSum(int, int, int);

int main()
{
    int value1, value2, value3;

    cout << "This program will calculate the sums of 3 integers." << endl;
    cout << "Enter value 1: ";
    cin >> value1;
    cout << "Enter value 2: ";
    cin >> value2;
    cout << "Enter value 3: ";
    cin >> value3;

    showSum(value1, value2, value3);
    cout << endl;
    cout << "Now I am back to main" << endl;


    return 0;
}

void showSum(int num1, int num2, int num3)
{
    cout << "The value of int num is " << (num1 + num2 + num3);
}
