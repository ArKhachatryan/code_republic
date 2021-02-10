/*Ստեղծել հաշվիչ ծրագիր, որը մուտքագրում է երկու թվեր և գործողության սիմվոլը։ 
Օրինակ՝ 4, 5 և ‘+’։ Կատարել համապատասխան թվաբանական գործողությունը թվերի հետ 
ըստ մուտքագրված գործողության սիմվոլի և տպել արդյունքը էկրանին։*/

#include <iostream>

void input_operation(double &op1, double &op2, char &op3) {
        std::cout << "Enter first operand: ";
        std::cin >> op1;
        std::cout << "Enter second operand: ";
        std::cin >> op2;
        std::cout << "Enter operator: ";
        std::cin >> op3;
}

int main() {
        double op1, op2;
        char operation;
        input_operation(op1, op2, operation);
        switch(operation) {
                case '+':
                        std::cout << "Result is equal to " << op1 + op2 << std::endl;
                        break;
                case '-':
                        std::cout << "Result is equal to " << op1 - op2 << std::endl;
                        break;
                case '*':
                        std::cout << "Result is equal to " << op1 * op2 << std::endl;
                        break;
                case '/':
                        std::cout << "Result is equal to " << op1 / op2 << std::endl;
                        break;
        }
}
