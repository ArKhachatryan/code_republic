/*Մուտքագրել զանգվածի տարրերի արժեքները։ Գտնել և տպել առավելագույն արժեքով տարրի ինդեքսը։*/

#include <iostream>
using namespace std;


void get_count_elements(int &n) {
        cout << "Enter count of numbers: ";
        cin >> n;
};

int* get_numbers(int length) {
        int *p = new int[length];
        cout << "Enter numbers" << endl;
        while (length > -1) {
                cin >> p[length];
                length--;
        };
        return p;
};

int get_max(int* p, int length) {
        int max = p[0];
        while(length > -1) {
                if (p[length] > max) { max = p[length]; };
                length--;
        }
        return max;
};

int main() {
        int length;
        get_count_elements(length);
        int* p = get_numbers(length - 1);
        cout << "The max number is " << get_max(p, length - 1) << endl;
};
