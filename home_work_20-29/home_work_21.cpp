/*Մուտքագրել երկու զանգվածներ, տպել դրանց գումարը։*/

#include <iostream>
using namespace std;


void get_count_elements(int &n) {
        cout << "Enter count of numbers: ";
        cin >> n;
};

int* get_numbers(int length) {
        int *p = new int[length];
        cout << "Enter numbers" << endl;
        while (length > 0) {
                cin >> p[length];
                length--;
        };
        return p;
};

void summ_of_arrays(int* arr1, int* arr2, int length) {
        int i = length;
        cout << "Summary of arrays is [";
        while (i > 0) {
                cout << arr1[i] + arr2[i] << ",";
                i--;
        }
        cout << "]" << endl;
}

int main() {
        int length;
        get_count_elements(length);
        int* arr1 = get_numbers(length);
        int* arr2 = get_numbers(length);
        summ_of_arrays(arr1, arr2, length);
};
