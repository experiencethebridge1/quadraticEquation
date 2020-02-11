/*
 * Simple c++ implementation of the quadratic equation
 * Sean O'Brien
 */

#include <iostream>
#include <cmath>   // defines sqrt() function
using namespace std;

int main() {
    // impliments the quadratic formula

    // define variables
    double long a, b, c;
    int rc = 1;

    // user i/o
    cout << "Enter the coefficients of a quadratic equation: \n";
    cout << "\ta: ";    cin >> a;
    cout << "\tb: ";    cin >> b;
    cout << "\tc: ";    cin >> c;
    cout << "The equation is: " << a << "*x*x + " << b << "*x + " << c << " = 0\n";

    double long d = b*b - 4*a*c;
    // discriminant
    if(d < 0) {
        cout << "The discriminant, d = " << d << " < 0, so there are no real solutions.\n";
        return rc;
    } else {
        double long sqrtd = sqrt(d);
        double long x1 = (-b + sqrtd) / (2 * a);
        double long x2 = (-b - sqrtd) / (2 * a);

        cout << "The solutions are: \n";
        cout << "\tx1 = " << x1 << endl;
        cout << "\tx2 = " << x2 << endl;
        // check solution
        cout << "Check:\ta*x1*x1 + b*x1 + c = " << a * x1 * x1 + b * x1 + c;
        cout << "\n    \ta*x2*x2 + b*x2 + c = " << a * x2 * x2 + b * x2 + c;
    }
}
