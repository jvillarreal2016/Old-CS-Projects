#include "StudentRecords.h"
#include <iostream>
#include <iomanip>
#include <string.h>
#include <stdlib.h>
#include<stdio.h>
#include <fstream>
#include <sstream>

using namespace std;

StudentRecords::StudentRecords()
{
    //set values using setters and passing user supplied values
	setID(studentId);
	setFirstName(studentFirstName);
	setLastName(studentLastName);
	setGrades(Grades);
}

void StudentRecords::setID(string studentID)
{
	studentId = studentID;
}

void StudentRecords::setFirstName(string firstName)
{
	studentFirstName = firstName;
}

void StudentRecords::setLastName(string lastName)
{
	studentLastName = lastName;
}

void StudentRecords::setGrades(double studentGrades[])
{
	for( int i = 0; i < amountGrades; ++i)
	{
		Grades[i] = studentGrades[i];
	}
}
////functions
void StudentRecords::calc_Avg()
{
    double averageGrade = 0;
    for(int i = 0; i < amountGrades; ++i)
    {
        averageGrade += Grades[i];
    }
    avg = averageGrade/amountGrades;
    // avg = averageGrade;

}
//Display Function
void StudentRecords::display_list()
{

    cout << studentId << setw(10) << studentFirstName << setw(15) << studentLastName
         << setw(10) << avg << setw(10);
         for(int i = 0; i < amountGrades; i++)
         {
             cout << Grades[i] << "  ";
         }
         cout << endl;
}

//deconstructor
//StudentRec::~StudentRec(){}
