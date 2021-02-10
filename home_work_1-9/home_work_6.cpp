/*Մուտքագրել օգտագործողի անունը և տպել էկրանին հակառակ հերթականությամբ։*/

#include <iostream>
using namespace std;


string input_name() {
        string name;
        cout << "Enter your name: ";
        getline(cin, name);
        return name;
};

void print_reversed(string str) {
        int length = str.length();
        while(length > -1) {
                cout << str[length];
                length--;
        }
}

int main() {
        string name = input_name();
        cout << "Your reversed name is "; print_reversed(name);
}
