/*Գրել ֆունկցիա, որը որպես արգումենտ ստանում է num ամբողջ 
տիպի փոփոխականը և տպում է num-ից մինչև 0 արժեքները։ 
Ֆունկցիան իրականացնել ռեկուրսիվ տարբերակով։*/

#include <iostream>
using namespace std;


void print_from_num_to_0(int n) {
        if (n > -1) { 
                cout << n << ", ";
                print_from_num_to_0(n - 1);
        }
}

int main() {
        int num;
        cout << "Enter your number: ";
        cin >> num;
        print_from_num_to_0(num);
        cout << endl;
}
