/*Տպել քառակուսային մատրիցի գլխավոր անկյունագծի տարրերը։*/

#include <iostream>
using namespace std;


void print_main_dioganal(int** mtrx, int length) {
        for (int i = 0; i < length; i++) {
                for (int j = 0; j < length; j++) {
                        if (i != j) continue;
                        cout << mtrx[i][j] << endl;
                }
        }
}

int** get_mtrx() {
        int length;
        cout << "Enter length of matrix: ";
        cin >> length;
        int** mtrx = new int*[length];
        cout << "Enter elements of matrix: " << endl;
        for (int i = 0; i < length; i++) {
                mtrx[i] = new int[length];
                for (int j = 0; j < length; j++) {
                        cin >> mtrx[i][j];
                }
        }
        return mtrx;
}

int main() {
        int ** arr = get_mtrx();
        print_main_dioganal(arr, 3);
}
