#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{

    int swapHolder = -1;
    int End = 10;
    int length = 10;

    int myArray[] = {44, 9, 237, 1, 5, 44, 534, 17, 21, 819};

    for(int counter = length - 1; counter > 0; counter--)
    {
        for( int index = 0; index < End; index++)
        {
            if (myArray[index] > myArray[index + 1])
            {
                swapHolder = myArray[index + 1];
                myArray[index + 1] = myArray[index];
                myArray[index] = swapHolder;
            }
        }
        End--;
    }

    for (int index = 0; index < 10; index++)
    {
        cout << myArray[index] << ", ";
    }
    cout << endl;
}
