/*Ստեղծել Point ստրուկտուրա, որը նկարագրում է կետը երկչափ հարթության վրա։ Մուտքագրել արժեքներ։*/

#include <iostream>
using namespace std;


struct Point {
        double x, y;
        Point(double a_x, double a_y) {
                x = a_x;
                y = a_y;
        };
};

int main() {
        Point p1(2.4, 3.7);
}
