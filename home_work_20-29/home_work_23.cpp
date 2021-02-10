/*Տպել քառակուսային մատրիցի օժանդակ անկյունագծի տարրերը։*/

#include <iostream>
using namespace std;


void print_side_dioganal(int** mtrx, int length) {
        int diff = length - 1;
        cout << "Side diagonal of matrix: [";
        for (int i = 0; i < length; i++) {
                for (int j = 0; j < length; j++) {
                        if (i != j - diff) continue;
                        cout << mtrx[i][j] <<", ";
                }
                diff -= 2;
        }
        cout << "\b\b]" << endl;
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
        print_side_dioganal(arr, 3);
}
