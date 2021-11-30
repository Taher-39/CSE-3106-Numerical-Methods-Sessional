#include<bits/stdc++.h>
using namespace std;
#define EPSILON 0.001

double equation(double x){
    // double a, b, c, p1, p2, p3;
    // a = -2; b =  6; c = 23;
    // p1 = 3; p2 = 1; p3 = 0;

    return -2*x*x*x + 6*x + 23;
}

void bisection(double a, double b) {
    if( equation(a) * equation(b) >= 0){
        cout << "You have not assumed right a and b \n";
        return;
    }

    double x = a;
    while( (b-a) >= EPSILON ){
        x = (a + b) / 2;
        if(equation(x) == 0.0){
            break;
        }

        else if(equation(x) * equation(a) < 0){
            b = x;
        }
        else
            a = x;
    }
    cout << "Root is : " << x;


}

int main(){
    double a, b;
    cin >> a;
    cin >> b;
    bisection(a, b);
    return 0;
}