#include <iostream>
using namespace std;

// Merges two sorted subarrays of A[].
// First sorted subarray is A[l..m].
// Second sorted subarray is A[m+1..r].
// You might want to call this function in function mergeSort().
void merge(int A[], int l, int m, int r)
{
    int num1 = m - l + 1;
    int num2 =  r - m;

    int L[num1], R[num2];

    for (int counter1 = 0; counter1 < num1; counter1++)
        L[counter1] = A[l + counter1];
    for (int counter2 = 0; counter2 < num2; counter2++)
        R[counter2] = A[m + 1 + counter2];

    int counter1 = 0; //1st subarray
    int counter2 = 0; //2nd subarray
    int counter3 = l; //3rd merged array

    while (counter1 < num1 && counter2 < num2)
    {
        if (L[counter1] <= R[counter2])
        {
            A[counter3] = L[counter1];
            counter1++;
            counter3++;
        }
        else
        {
            A[counter3] = R[counter2];
            counter2++;
            counter3++;
        }
    }

    while (counter1 < num1)
    {
        A[counter3] = L[counter1];
        counter1++;
        counter3++;
    }

    while (counter2 < num2)
    {
        A[counter3] = R[counter2];
        counter2++;
        counter2++;
    }
}

// using mergeSort to sort sub-array A[l..r]
// l is for left index and r is right index of the
// sub-array of A[] to be sorted
void mergeSort(int A[], int l, int r)
{
    if(l == r)
        return;
    else{
        int m = (l + r)/2;
        mergeSort(A, l, m);
        mergeSort(A, m + 1, r);

        merge(A, l, m, r);
    }
}


int main()
{
    cout << "Please enter the length (number of elements) of the input array: ";
	int n;
	cin >> n;

	if(n <= 0) {
		cout << "Illegal input array length!" << endl;
		return 0;
	}

	int* A = new int [n];

	cout << "Please enter each element in the array" << endl;
	cout << "(each element must be an integer within the range of int type)." << endl;
	for(int i=0; i<n; i++) {
		cout << "A[" << i << "] = ";
		cin >> A[i];
	}

    cout << "Given array A[] is: ";
	for(int i=0; i<n-1; i++)
		cout << A[i] << ",";
	cout << A[n-1] << endl;


    mergeSort(A, 0, n-1);

    cout << "After mergeSort, sorted array A[] is: ";
	for(int i=0; i<n-1; i++)
		cout << A[i] << ", ";
	cout << A[n-1] << endl;


	delete [] A;
    return 0;
}
