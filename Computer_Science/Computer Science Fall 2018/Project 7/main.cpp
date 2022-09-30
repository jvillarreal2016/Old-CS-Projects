#include <iostream>
#include "StudentRecords.h"

using namespace std;

int main()
{
/*
This program connects the header file(where the Student Records Class
was declared , and this file will use that file to Input a file int students
class object, calculate the average score of each student, then Print out each
students ID, Student Name, Average score, and associated 10 testScores
*/

StudentRecords Records[15];
StudentRecords thisStudent;

string idNum, firstName, lastName;
double grades[10]

ifstream fin;

file.open("StudentRecords.txt");
while (!fin.eof); //While file is still being read.
{
    fin >> idNum;
    thisStudent.setId(idNum);
    fin >> firstName;
    thisStudent.setFirstName(firstName);
    fin >> lastName;
    thisStudent.setLastName(lastName);
    for (int i = 0; i < 15; i++)
    {
        fin >> grades[i];
    }
    thisStudent.setGrades(grades);
}

    return 0;
}
