/*Ստեղծել երկու Student օբյեկտներ, մուտքագրել արժեքները ըստ նախորդ խնդիրների։ 
Ստեղծել երրորդ օբյեկտը, որը կկառուցվի առաջին երկուսի հիման վրա։ 
Որպես անուն օգտագործել առաջին օբյեկտի անունը, որպես ազգանուն երկրորդ օբյեկտի 
ազգանունը, որպես տարիք առաջին երկու օբյեկտների տարիքների միջին թվաբանականը։*/

#include <iostream>
using namespace std;


struct student {
        string name, surname, subject;
        int age;
        student(string a_name, string a_surname, string a_subject, int a_age) {
                name = a_name;
                surname = a_surname;
                subject = a_subject;
                age = a_age;
        }
};

int main() {
        student s1("Arman", "Khachatryan", "C++", 26);
        student s2("Daron", "Malakian", "Guitar", 54);
        student s3(s1.name, s2.surname, "C++", (s1.age + s2.age)/2);
}
