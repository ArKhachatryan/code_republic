/*Գրել ֆունկցիա, որը ստանում է զանգված և տպում է զանգվածի տարրերը էկրանին ռեկուրսիվ տարբերակով։*/

#include <iostream>
using namespace std;


void get_count_elements(int &n) {
        cout << "Enter count of numbers: ";
        cin >> n;
};

int* get_numbers(int length) {
        int *p = new int[length];
        cout << "Enter numbers " << endl;
        while (length > -1) {
                cin >> p[length];
                length--;
        };
        return p;
};

void print_array(int* p, int length) {
        if (length > -1) {
                cout << p[length] << ", ";
                print_array(p, length - 1);
        }
}

int main() {
        int length;
        get_count_elements(length);
        int* p = get_numbers(length - 1);
        print_array(p, length - 1);
        cout << endl;
};
