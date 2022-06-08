#include<bits/stdc++.h>
using namespace std;

double equation(double x){

	return x*x*x - x - 1;
}

void regulaFalsi(double a, double b, double E)
{
	if (equation(a) * equation(b) >= 0)
	{
		cout << "You have not assumed right a and b\n";
		return;
	}

	double x = a; 

	for(int i = 0; i <= 1000; i++){
	
		x = (a*equation(b) - b*equation(a))/ (equation(b) - equation(a));

		if (equation(x) == 0)
			break;

		else if (equation(x)*equation(a) < 0)
			b = x;
		else
			a = x;
	}
	cout << "The value of root is : " << x <<endl;
}

int main()
{
	double a, b, E = 0.0001;
	cout<<"Enter a: ";
    cin >> a;
	cout<<"Enter b: ";
    cin >> b;
	regulaFalsi(a, b, E);
	return 0;
}
