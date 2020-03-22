//
// Created by Chris on 4/9/2018.
//
#ifndef UNTITLED9_RATIONAL_H
#define UNTITLED9_RATIONAL_H

class Rational{
private:
    int num;
    int denom;

public:
    int* reducedForm(int num, int denom);
    Rational(int =0, int=1);
    Rational add(const Rational &);
    Rational sub(const Rational &);
    Rational mult(const Rational &);
    Rational divide(const Rational &);
    void print();
    void printFloat();
};

#endif //UNTITLED9_RATIONAL_H
