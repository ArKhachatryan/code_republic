/*Ստեղծել երկու Line օբյեկտներ ըստ նախորդ խնդրի։ Ստուգել արդյոք երկու 
ուղիղ գծերը հատվում են միմյանց հետ։ Ստուգման արդյունքը տպել էկրանին։*/

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
        };
};

int main() {
        Point p1(2.4, 3.7);
        Point p2(2.4, 3.8);
        Point p3(2.4, 3.9);
        Point p4(2.4, 3.10);
        Line l1(&p1, &p2, &p3, &p4);
        Point p5(2.4, 3.7);
        Point p6(2.4, 3.8);
        Point p7(2.4, 3.9);
        Point p8(2.4, 3.10);
        Line l2(&p5, &p6, &p7, &p8);
        for (int i = 0; i < 5; i++) {
                for (int i = 0; i < 5; i++) {
                        if (l1.arr[i] != l2.arr[i]) { continue; };
                        cout << "YES";
                }
        }
}
