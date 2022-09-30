#include <iostream>
#include <sstream>
#ifndef STUDENTRECORDS_H
#define STUDENTRECORDS_H

using namespace std;

class StudentRecords
{
    public:
        StudentRecords();
		//These will set values
			void setID(string);
			void setFirstName(string);
			void setLastName(string);
			void setGrades(double[]);
		//get values
			string getId();
			string getName();
			double gradeAvg();
			int getNumGrades();
        //Misc. Methods
            void calc_Avg();
            void display_list();

    private:
            string studentId;
			string studentFirstName;
			string studentLastName;
			static const int amountGrades = 10;
			double  Grades[amountGrades];
			double  avg;
};

#endif // STUDENTRECORDS_H
