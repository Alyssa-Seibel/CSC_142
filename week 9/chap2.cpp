/*
chap2.cpp
- In this file different calculator operations are executed when given two numbers
- Alyssa Seibel
- 3/19/25
*/


#include <string>
#include <iostream>

//2-1
enum class Operation{

    Add,
    Subtract,
    Multiply,
    Divide

};

//2-2
struct Calculator{
    Operation operation;

    Calculator(Operation op) : operation(op) {}
//2-3
    double preformOperation(double num1, double num2){
        switch(operation){
        case Operation::Add: return num1 + num2;
        case Operation::Subtract: return num1 - num2;
        case Operation::Multiply: return num1 * num2;
        case Operation::Divide: return num1 / num2;
        default: std::cout << "Unknown"<<std::endl;
        } 
        return 0;
    }
};

int main(){
//2-4
    Calculator addOp(Operation::Add);
    Calculator subOp(Operation::Subtract);
    Calculator mulOp(Operation::Multiply);
    Calculator divOp(Operation::Divide);

    std::cout << "Addition: " <<  addOp.preformOperation(5,8) << std::endl;
    std::cout << "Subtraction: " << subOp.preformOperation(10,8) << std::endl;
    std::cout << "Multiply: " << mulOp.preformOperation(2,8) << std::endl;
    std::cout << "Divide: " << divOp.preformOperation(16,8) << std::endl;

    return 0;
}