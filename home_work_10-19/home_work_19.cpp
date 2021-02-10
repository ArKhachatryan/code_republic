/*Մուտքագրել զանգվածի տարրերի արժեքները։ Տպել զանգվածի տարրերը հակառակ հերթականությամբ։*/

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
        for (int i = 0; i < length; i++) {
                cout << p[i] << ", ";
        }
        cout << endl;
}

int main() {
        int length;
        get_count_elements(length);
        int* p = get_numbers(length - 1);
        print_array(p, length);
};
