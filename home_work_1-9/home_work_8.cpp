/*Մուտքագրել տող։ Տողի բոլոր սիմվոլները դարձնել մեծատառ։ Արդյունքը տպել էկրանին։*/

#include <iostream>
using namespace std;


string input_string() {
        string str;
        getline(cin, str);
        return str;
}

string to_uppercase(string str) {
        int length = str.length();
        string res = str;
        while(length > -1) {
                res[length] += 'A' - 'a';
                length--;
        }
        return res;
}

int main() {
        cout << "Enter your string: ";
        string str = input_string();
        string res = to_uppercase(str);
        cout << "Your uppercased string is ";
        cout << res; 
        cout << endl;
}
