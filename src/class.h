#ifndef CLASS_H
#define CLASS_h

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Calculator;
class Expression;

class Operation;

// TODO :
// Define below classes and its methods accordingly in a new file
// like Addition.cpp, Subtractin.cpp etc
// These classes will be child classes of Operation
class Addition;
class Subtraction;
class Multiplication;
class Division;
class Percentage;
class SquareRoot;

class Operation
{
protected:
    double a;
    double b;

public:
    Operation(double x, double y) : a(x), b(y) {} // constructor
    double solve() {}                             // each operation will return its result after the calculation
    void printOP() {}
};

void welcome();

#endif