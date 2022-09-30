#include <iostream>

using namespace std;

int main()
{
   const int SIZE = 12;
   int columns = 3;
   int j = 0; // counter variable



   string studentNames[SIZE] = {"Nick", "Javi", "Connor", "Josh", "Brittney",
                                "Jordyn", "Lauren", "Kyra", "Katie", "Mark",
                                "Bart", "Emily"};

   string emailAddresses[SIZE] = {"Nick@gmail.com", "Javi@gmail.com",
                                   "Connor@gmail.com", "Josh@gmail.com",
                                   "Brittney@gmail.com", "Jordyn@gmail.com",
                                   "Lauren@gmail.com", "Kyra@gmail.com",
                                   "Katie@gmail.com", "Mark@gmail.com",
                                   "Bart@gmail.com", "Emily@gmail.com"};

   string studentRecords[12][3] = {{"StudentIDs", "Names", "Email"},{"A1234", "Nick", "Nick@gmail.com"},
    {"A2345", "Connor", "Connor@gmail.com"}, {"A3456", "Josh", "Josh@gmail.com"}, {"A4567", "Brittney", "Brittney@gmail.com"},
    {"A5432", "Jordyn", "Jordyn@gmail.com"}, {"A5678", "Lauren", "Lauren@gmail.com"}, {"A6543", "Kyra@gmail.com"},
    {"A6789", "Katie", "Katie@gmail.com"}, {"A7654", "Mark", "Mark@gmail.com"}, {"A7890", "Bart", "Bart@gmail.com"},
    {"A8765", "Emily",  "Emily@gmail.com"}};

    for (int rows=0; rows<12; rows++)
    {
        for (int columns=0; columns<3; columns++)
        {
           cout << studentRecords[rows][columns] << " ";
        }
        cout << endl;
    }

   return 0;

}



