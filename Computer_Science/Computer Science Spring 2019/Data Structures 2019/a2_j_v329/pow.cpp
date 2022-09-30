#include <iostream>

using namespace std;

double pow(double x, int y)
{
    double result;
    if (y == 0)
        {return 1;}
    else if (y < 0)
    {
        y = y * -1;
        x = (1/x);
        result = x * pow(x, y-1);
        return result;
    }
    else
    {
        result = x * pow(x, y-1);
        return result;
    }
}

int main()
{
	cout << "To calculate x^y ..." << endl;

	double x;
	int y;
	cout << "Please enter x: ";
	cin >> x;
	cout << "Please enter y: ";
	cin >> y;

	if(x == 0) {
		if (y > 0)
			cout << 0 << endl;
		else
			cout << "x^y is not defined" <<endl;
	}
	else
		cout << pow(x,y) << endl;


	return 0;
}

