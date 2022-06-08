#include <bits/stdc++.h>
using namespace std;

double Equation(double x)
{
	return x*x*x - x - 1;
}

void secant(double x1, double x2, double E)
{
	double n = 0, xm, x0;
	if (Equation(x1) * Equation(x2) < 0) {
		while (fabs(xm - x0) >= E) {
			x0 = (x1 * Equation(x2) - x2 * Equation(x1)) / (Equation(x2) - Equation(x1));

			// update the value of interval
			x1 = x2;
			x2 = x0;

			// update number of iteration
			n++;

			// if x0 is the root of equation then break the loop
			if (Equation(x0) == 0)
				break;
			xm = (x1 * Equation(x2) - x2 * Equation(x1)) / (Equation(x2) - Equation(x1));
		}

		cout << "Root of the given equation=" << x0 << endl;
		cout << "No. of iterations = " << n << endl;
	} else
		cout << "Can not find a root in the given interval";
}

int main()
{
	// initializing the values
	double x1, x2, E = 0.0001;
	cout<<"Enter X1: ";
	cin>>x1;
	cout<<"Enter X2: ";
	cin>>x2;
	secant(x1, x2, E);
	return 0;
}
