/*Գրել ֆունկցիա, որը ստանում է քառակուսային հավասարման մուտքային  տվյալները և 
վերադարձնում է լուծումը։ Կանչել և տպել ֆունկցիայի վերադարձրած արժեքը։*/

#include <iostream>
#include <cmath>
using namespace std;


double define_dmnt(double a, double b, double c) { return b*b - 4*a*c; }

void print_roots(double a, double b, double c) {
        double x1, x2, x0;
        double D = define_dmnt(a, b, c);
        if ( D > 0 ) {
                x1 = ( -b + sqrt(D) ) / (2*a);
                x2 = ( -b - sqrt(D) ) / (2*a);
                cout << "Quadratic equation has two roots: " << x1 << " and " << x2 << endl;
        } else if ( D == 0 ) {
                x0 = (-b)/(2*a);
                cout << "Quadratic equation has one root: " << x0 << endl;
        } else {
                cout << "Quadratic equation hasn't any roout" << endl;
        }
}

void get_quadratic_equation(double &a, double &b, double &c) {
        cout << "Enter a: ";
        cin >> a;
        cout << "Enter b: ";
        cin >> b;
        cout << "Enter c: ";
        cin >> c;
}

int main() {
        double a, b, c;
        get_quadratic_equation(a, b, c);
        if (!a) {
                cout << "This isn't quadratic equation" << endl;
                return 1;
        }
        print_roots(a, b, c);
}
