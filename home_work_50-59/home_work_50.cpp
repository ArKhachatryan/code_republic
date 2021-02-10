
#include <iostream>
#include <cmath>
using namespace std;


void get_count_elements(int &n) {
        cout << "Enter count of numbers: ";
        cin >> n;
};

int* get_arr(int length) {
        int *p = new int[length];
        cout << "Enter numbers " << endl;
        while (length > -1) {
                cin >> p[length];
                length--;
        };
        return p;
};

double arthm_avg(int *arr, int length) {
        double avg = 0;
        for (int i = 0; i < length; i++) {
                avg += arr[i];
        }
        return avg/length;
};

double erkr_avg(int *arr, int length) {
        double avg = 1;
        for (int i = 0; i < length; i++) {
                avg *= arr[i];
        }
        
        return pow(avg, 1/(double)length);
};

int main() {
        int length;
        get_count_elements(length);
        int* p = get_arr(length - 1);
        cout << "The arythmetic average of your sequence is " << arthm_avg(p, length) << endl;
        cout << "The erkrachapakan average of your sequence is " << erkr_avg(p, length) << endl;
};
