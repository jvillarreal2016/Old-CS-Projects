/*
Program Author: Javier Villarreal
Professor: Hwang
Last Updated: 10/21/2018
*/

#include <iostream>
#include <iomanip>
using namespace std;

//Function prototype for BubbleSort
void bubbleSort(int[], int);
void swapInts(int &, int &);

struct ProductInfo
{
    string productName;
    int productID;           //Product identitification number
    double productPrices;    //Product price
    double amountSold;       //Units sold
    double productSales;     //Total Sales per product
};

int main ()
{
    const int SIZE = 15;        //Number of items in array
    ProductInfo info[SIZE];     //Array of Product Info
    info[0].productID = 1000;
    info[1].productID = 1001;
    info[2].productID = 1002;
    info[3].productID = 1003;
    info[4].productID = 1004;
    info[5].productID = 1005;
    info[6].productID = 1006;
    info[7].productID = 1007;
    info[8].productID = 1008;
    info[9].productID = 1009;
    info[10].productID = 1010;
    info[11].productID = 1011;
    info[12].productID = 1012;
    info[13].productID = 1013;
    info[14].productID = 1014;
    info[0].productName = "Laptop";
    info[1].productName = "Mug";
    info[2].productName = "Textbook";
    info[3].productName = "Notebook";
    info[4].productName = "Couch";
    info[5].productName = "Desk";
    info[6].productName = "TV";
    info[7].productName = "Baseball Cap";
    info[8].productName = "Chair";
    info[9].productName = "Salt";
    info[10].productName = "Door";
    info[11].productName = "Flag";
    info[12].productName = "Microwave";
    info[13].productName = "Bed";
    info[14].productName = "Deodrant";

    cout << "Enter the prices for each item: " << endl;
    for (int index = 0; index < SIZE; index++)
        {
        cout << info[index].productName << ": ";
        cin >> info[index].productPrices;
        }

    cout << "Enter the amount of each item sold: " << endl;
    for (int index = 0; index < SIZE; index++)
    {
        cout << info[index].productName << ": ";
        cin >> info[index].amountSold;
    }

    cout << "The total amount of each item sold is: ";
    for (int index = 0; index < SIZE; index++)
        {
            info[index].productSales = info[index].amountSold * info[index].productPrices;
            cout << info[index].productName << ": " << info[index].productSales << "$" << endl;
        }

    bubbleSort(info.productSales, SIZE);

}

void bubbleSort(int info[], int SIZE)
{
    int maxElement;

    for (maxElement = SIZE - 1; maxElement > 0; maxElement--)
    {
        for (int index = 0; index < maxElement; index++)
        {
            if (info[index] > info[index+1])
            {
                swapInts(info[index], info[index]);
            }
        }
    }
}

void swapInts(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
