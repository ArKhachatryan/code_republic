/*Գրել ֆունկցիա, որը ստանում է զանգված և ինդեքսի համար։ Ֆունկցիան հեռացնում է 
զանգվածի տրված ինդեքսով տարրը և վերադարձնում նոր զանգվածը որպես արդյունք։*/

#include <iostream>
using namespace std;


void get_count_elements(int &n) {
        cout << "Enter count of numbers: ";
        cin >> n;
};

int* get_array(int length) {
        int *p = new int[length];
        cout << "Enter numbers " << endl;
        while (length > -1) {
                cin >> p[length];
                length--;
        };
        return p;
};

int* delete_el(int* arr, int ind, int length) {
        int* copy_arr = new int[length - 1];
        for (int i = 0; i < length; i++) {
                if (i == ind) { continue; };
                copy_arr[i] = arr[i];
        }
        return copy_arr;
};

int main() {
        int length;
        get_count_elements(length);
        int* p = get_array(length - 1);
        int* arr = delete_el(p, 4, length);
        for (int i = 0; i < length - 1; i++) {
                cout << arr[i];
        }
};
