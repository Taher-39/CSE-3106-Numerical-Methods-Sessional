#include<bits/stdc++.h>
using namespace std;

double eq(double x) {
    return x*x*x - x + 1;
}

double bisection(double a, double b, double E){
    if(eq(a) * eq(b) < 0 ) {
        double x = a;
        while (abs(b-a) >= E){
            x = (a + b) / 2;

            if(eq(x) == 0.0)
                break;
            
            else if(eq(x) * eq(a) < 0){
                b = x;
            }
            else{
                a = x;
            }
        }

        cout<<"Root is: "<< x <<endl;
        
    }
    else {
        cout<<"Assume Right a and b"<<endl;
    }
        
}

int main() {
    double a, b, E = 0.001;
    cin>>a;
    cin>>b;
    bisection(a, b, E);
    return 0;
}