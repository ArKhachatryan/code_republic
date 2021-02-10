/*Մուտքագրել տող։ Տողի ամեն երկրորդ սիմվոլը դարձնել մեծատառ։ Արդյունքը տպել էկրանին։*/

#include <iostream>
using namespace std;


string input_string() {
        string str;
        getline(cin, str);
        return str;
}

string to_uppercase(string str) {
        int n = 1;
        string res = str;
        res.push_back('0');
        while(!(res[n] == '0' || n == str.length() - 1)) {
                res[n] += 'A' - 'a';
                n += 2;
        }
        res.pop_back();
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
