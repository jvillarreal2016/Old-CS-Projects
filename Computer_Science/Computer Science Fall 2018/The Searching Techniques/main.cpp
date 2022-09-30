#include <iostream>
#include <string>

using namespace std;

//Function Prototypes
int sequentialSearch(const int[], int, int);
int binarySearch(const int [], int, int);

int main()
{
    const int SIZE = 12;    //Constant size for array of the 12 students

    int results;            //Holds the search results
    int studentnumber;      //Holds student ID number
    int searchnum;          //Holds number of students the program will search
    int swapholder = -1;    //Holds value while bubble sorting
    int length = 12;        //Non-constant size of array for counting

    //Array with students IDs sorted in ascending order
    int StudentIDs[SIZE] = {7654, 2345, 3456, 8765, 4567, 6789, 5678,
                            6543, 5432, 1234, 7890, 4321};


    //Array with student's names
    string StudentName[SIZE] = {"Nick", "Javi", "Connor", "Josh", "Brittney",
                                "Jordyn", "Lauren", "Kyra", "Katie", "Mark",
                                "Bart", "Emily"};

    //Array with student's email adrresses
    string EmailAddresses[SIZE] = {"Nick@gmail.com", "Javi@gmail.com",
                                   "Connor@gmail.com", "Josh@gmail.com",
                                   "Brittney@gmail.com", "Jordyn@gmail.com",
                                   "Lauren@gmail.com", "Kyra@gmail.com",
                                   "Katie@gmail.com", "Mark@gmail.com",
                                   "Bart@gmail.com", "Emily@gmail.com"};

    //Multidimensional array holding all of the students records
    string studentRecords[12][3] = {{"StudentIDs", "Names", "Email"},{"A1234", "Nick", "Nick@gmail.com"},
    {"A2345", "Connor", "Connor@gmail.com"}, {"A3456", "Josh", "Josh@gmail.com"}, {"A4567", "Brittney", "Brittney@gmail.com"},
    {"A5432", "Jordyn", "Jordyn@gmail.com"}, {"A5678", "Lauren", "Lauren@gmail.com"}, {"A6543", "Kyra", "Kyra@gmail.com"},
    {"A6789", "Katie", "Katie@gmail.com"}, {"A7654", "Mark", "Mark@gmail.com"}, {"A7890", "Bart", "Bart@gmail.com"},
    {"A8765", "Emily",  "Emily@gmail.com"}};

    cout << "This is the original, unsorted student ID array, before bubble sorting" << endl;

    for (int index=0; index<SIZE; index++)
    {
        cout << StudentIDs[index] << " ";
    }
    cout << endl;
    cout << endl;

    //This for loop is used to sort the array from lowest to highest.
    for(int counter = length - 1; counter > 0; counter--)
    {
        for( int index = 0; index < SIZE; index++)
        {
            if (StudentIDs[index] > StudentIDs[index + 1])
            {
                swapholder = StudentIDs[index + 1];
                StudentIDs[index + 1] = StudentIDs[index];
                StudentIDs[index] = swapholder;
            }
        }
        length--;
    }

    cout << "This is the sorted array after bubble sorting." << endl;

    for (int index=0; index<SIZE; index++)
    {
        cout << StudentIDs[index] << " ";
    }

    cout << endl;
    cout << endl;


    for (int rows=0; rows<12; rows++)
    {
        for (int columns=0; columns<3; columns++)
        {
           cout << studentRecords[rows][columns] << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << "How many names are you searching for? ";
    cin >> searchnum;

    cout << endl;
    cout << "This part of the program is using Sequential Search." << endl;

    for (int i=0; i < searchnum; i++)      //i is the coutner variable
    {
     cout << endl;
     cout << "Enter the ID of the student you are searching for: A";
     cin >> studentnumber;

     results = sequentialSearch(StudentIDs, SIZE, studentnumber);

     if (results >= SIZE)
         {
          cout << endl;
          cout << "This student does not exist";
          cout << endl;
         }

     else
        {
        cout << endl;

        cout << "Student ID number is: " << StudentIDs[results] << endl;
        cout << "Student Name is: " << StudentName[results] << endl;
        cout << "Student Email Address is: " << EmailAddresses[results] << endl;
        }
    }

    cout << endl;
    cout << "This part of the program is using Binary Search." << endl;

    for (int i=0; i < searchnum; i++)
        {
         cout << endl;
         cout << "Enter the ID of the student you are searching for: A";
         cin >> studentnumber;

         results = binarySearch(StudentIDs, SIZE, studentnumber);

         if (results == -1)
            {
             cout << endl;
             cout << "This student does not exist" << endl;
             cout << endl;
            }
        else
            {
             cout << endl;
             cout << "Student ID number is: " << StudentIDs[results] << endl;
             cout << "Student Name is: " << StudentName[results] << endl;
             cout << "Student Email Address is: " << EmailAddresses[results] << endl;
            }
        }

    return 0;
}

int sequentialSearch(const int StudentIDs[], int SIZE, int value)
{
    for (int i = 0; i < SIZE; i++)      //i is the counter variable
        {
         if (StudentIDs[i] == value)
            return i;
        if (i >= SIZE)
            return i;
        }
}

int binarySearch(const int StudentIDS[], int SIZE, int value)
{
    int first = 0;              //first array element
    int last = SIZE - 1;        //Last array element
    int middle;                 //Middle of the array
    int position = -1;          //Position of the search value

    bool found = false;         //stop searching

    while (!found && first <= last)
    {
        middle = (first + last) / 2;
        if (StudentIDS[middle] == value)
        {

            found = true;
            position = middle;
        }
        else if (StudentIDS[middle] > value)
                last = middle - 1;

        else
            first = middle + 1;
    }
    return position;
}

