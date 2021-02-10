/*Գրել ֆունկցիա, որը ստանում է տող և վերադարձնում տողի շրջված տարբերակը։*/

#include <iostream>
using namespace std;


string reverse_str(string str) {
        string res= "";
        for (int i = str.length() - 1; i > -1; i--) {
                res = res + str[i];
        }
        return res;
}

int main() {
        string str;
        cout << "Enter a string: ";
        cin >> str;
        cout << "Reversed string: " << reverse_str(str) << endl;
}
