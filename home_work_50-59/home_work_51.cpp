/*Տրված նախադասության համար տպել ամենակարճ տողը։*/

//???????????????? '\n' nshanov chi haskanum toxi verj@??????????????????????

#include <iostream>
using namespace std;


string sentence = "At vero eos et accusamus et iusto odio dignissimos ducimus \ 
                   qui blanditiis praesentium voluptatum deleniti atque \
                   corrupti quos dolores et quas molestias excepturi sint occaecati cupiditate non provident, \
                   similique sunt in culpa qui officia \
                   deserunt mollitia animi, id est laborum et dolorum fuga";

int foo(string sntc) {
        int max = 0;
        int count = 0;
        int str = 1;
        for (int i = 0; i < sntc.length(); i++) {
                cout << count << endl;
                if (sntc[i] == '\n') {
                        if (count > max) {
                                max = count;
                        }
                        count = 0;
                        continue;
                }
                count++;
        }
        return max;
};

int main() {
        cout << foo(sentence);
};
