// Created By: Javier Villarreal
// Last Updated: 10/1/18
// Professor Hwang

#include <iostream>
#include <fstream>

using namespace std;

double TotalSales(double, double); // Function to calculate total

int main()
{
    int total;  // Total sales amount
    int amountProducts; // Amount of products
    double totalUnits = 0; // Total of one kind of units Sold
    double totalAmountSold = 0; // Total amount of all items sold

    cout << "Please enter the amount of products you have in your file: ";
    cin >> amountProducts;

    double totalUnitsPrice[amountProducts]; // Array to hold all the units price when combined
    string *product = new string[amountProducts]; // Array to hold the names of the products
    int *productID = new int[amountProducts]; // Array to hold the product IDs
    double *unitPrice = new double [amountProducts]; // Array to hold the units individual price
    double *quantitySold = new double[amountProducts]; // Array to hold the amount of units that were sold



    ifstream fin;
    fin.open("newtext.txt");    //name of file created
    int i = 0;
    while (i<amountProducts)      // fills the arrays from the file
    {
        fin >> product[i];
        fin >> productID[i];
        fin >> unitPrice[i];
        fin >> quantitySold[i];
        i++;
    }
    fin.close();

    for(int i=0; i<amountProducts; i++) // calculates the total sales
    {
    cout << "The total sales for the " << product[i] << "'s is: ";
    total = TotalSales(unitPrice[i], quantitySold[i]);
    cout << total << endl;
    }

    cout << endl;
    cout << endl;

    cout << "List of all the elements in file: " << endl;
    cout << "Product ProductID UnitPrice QuantitySold";
    for(int i=0; i<amountProducts; i++) // Displays on the console what was in the file
    {
        cout << product[i] << " ";
        cout << productID[i] << " ";
        cout << unitPrice[i] << " ";
        cout << quantitySold[i] << " ";
        cout << endl;
    }

    cout << endl;

    cout << "The total number of units sold is: ";
    for(int i=0; i<amountProducts; i++) // Displays and calculates the total number of units sold
    {
        totalUnits = totalUnits + quantitySold[i];
    }
    cout << totalUnits;

    cout << endl;
    cout << endl;

    cout << "The total sales of all items is ";
    for(int i=0; i<amountProducts; i++)     // Calculates each individual items total sales
    {
       totalUnitsPrice[i] = unitPrice[i]*quantitySold[i];
    }
    for(int i=0; i<amountProducts; i++)     // Adds all items total sales to get the final total sales number
    {
        totalAmountSold = totalAmountSold + totalUnitsPrice[i];
    }
    cout << totalAmountSold;

    delete [] product;
    delete [] productID;
    delete [] unitPrice;
    delete [] quantitySold;

    return 0;
}


double TotalSales(double unitPrice, double quantitySold) // calculates items total sale
{
    return unitPrice*quantitySold;
}
