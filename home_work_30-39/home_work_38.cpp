/*Ստեղծել Line ստրուկտուրա, որը բաղկացած է Point օբյեկտների զանգվածից և նկարագրում է ուղիղ գիծ։*/

#include <iostream>
using namespace std;


struct Point {
        double x, y;
        Point(double a_x, double a_y) {
                x = a_x;
                y = a_y;
        };
};

struct Line {
        Point* arr;
        Line(Point* p1, Point* p2, Point* p3, Point* p4) {
                arr[0] = *p1;
                arr[1] = *p2;
                arr[2] = *p3;
                arr[3] = *p4;
        }
};

int main() {
        Point p1(2.4, 3.7);
        Point p2(2.4, 3.8);
        Point p3(2.4, 3.9);
        Point p4(2.4, 3.10);
        Point p5(2.4, 3.11);
        Line l1(&p1, &p2, &p3, &p4);
}
