#include<bits/stdc++.h>
using namespace std;

double e(double x) {
    return x*x*x - x - 1;
}

double diffE(double x) {
    return 3*x*x - 1;
}

void newton(double a, double E) {
    double h = e(a) / diffE(a);
    while(h >= E) {
        h = e(a) / diffE(a);
        a = a - h;
    }

    cout<<"Root is: "<<a<<endl;
}

int main() {
    double a, E = 0.0001;
    cin>>a;
    newton(a,E);
    return 0;
}