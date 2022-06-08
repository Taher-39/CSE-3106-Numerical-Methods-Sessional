#include<bits/stdc++.h>
using namespace std;

double e(double x) {
    return x*x*x - x -1;
}

void regulerFalsi(double a, double b, double E){
    if(e(a) * e(b) < 0) {
        
    }
    else {
        cout<<"Assume right a and b";
    }
}

int main() {
    double a, b, E = 0.001;
    cin>>a>>b;
    regulerFalsi(a, b, E);
    return 0;
}