#include <iostream>
#include <iomanip>
#include <string.h>
#include <stdlib.h>
#include<stdio.h>
#include <fstream>
#include <sstream>
#include<vector>
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


StudentRecords *Records[15];

Records[15] = new StudentRecords; //Dynamically allocate memory

string idNum, firstName, lastName;
double grades[10];
int i=0;

ifstream fin;

fin.open("NewStudent.txt");
while (!fin.eof() && i<=15) //While file is still being read.
{
     //counter variable
    fin >> idNum;
    Records[i]->setID(idNum);
    fin >> firstName;
    Records[i]->setFirstName(firstName);
    fin >> lastName;
    Records[i]->setLastName(lastName);

    for (int k = 0; k < 10; k++)
    {
        fin >> grades[k];
    }

        Records[i]->setGrades(grades);
        Records[i]->calc_Avg();
        Records[i]->display_list();
        i++;
}

//Deletes objects from memory

//delete Records[15];

fin.close();

}
