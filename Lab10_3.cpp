#include "Rational.h"
using namespace std;

#include <iostream>
// Course Number and section: 14:332:254:02
// Lab Instructor: Kazem Cheshmi
// Date Performed: 04/09/2018
// Date Submitted: 04/09/2018
// Submitted by: Hyun Sik Kim ,4794

int main(){
    Rational r1(3,4);
    r1.print();
    r1.printFloat();

    Rational r2(5,6);
    r2.print();
    r2.printFloat();

    std::cout <<"The addition is: " << std::endl;
    Rational ans = r1.add(r2);
    ans.print();
    ans.printFloat();

    cout <<"The subtraction is: " << endl;
    ans = r1.sub(r2);
    ans.print();
    ans.printFloat();

    std::cout <<"The multiplication is: " << std::endl;
    ans = r1.mult(r2);
    ans.print();
    ans.printFloat();

    std::cout <<"The division is: " << std::endl;
    ans = r1.divide(r2);
    ans.print();
    ans.printFloat();

    return 0;
};