// Member Operators
// Employee.cpp

/*
 Upgrade the Employee module to overload the + operator in two ways:

    - overload the + operator for an Employee object as the left operand and a double as the right operand

    - overload the + operator for a double as the left operand and an Employee object as the right operand

    In each case, use an independent helper definition (non-friend).
*/

#include <iostream>
#include <iomanip>
#include <cstring>
#include "Employee.h"
using namespace std;

Employee::Employee() {
    // safe empty state
    no = 0;
    name[0] = '\0';
    rate = MIN_WAGE;
}

Employee::Employee(int n, const char* nm) {
    Employee temp(n, nm, MIN_WAGE);
    *this = temp;
}

Employee::Employee(int n, const char* nm, double r) {
    if (n > 0 && nm[0] != '\0' && r >= MIN_WAGE) {
        no = n;
        strncpy_s(name, nm, MAX_NAME); // copy first MAX_NAME characters 
        name[MAX_NAME] = '\0';       // ensure that last byte is null
        rate = r;
    }
    else {
        Employee temp;
        *this = temp;
    }
}

void Employee::display() const {
    if (no > 0) {
        cout << fixed << setprecision(2);
        cout << name << " (" << no << ") $" << rate;
    }
    else
        cout << "no data available";
}

Employee& Employee::operator+=(double r) {
    if (no > 0 && r > 0.0)
        rate += r;
    return *this;
}

//  - overload the + operator for an Employee object as the left operand and a double as the right operand

Employee operator+(const Employee& e, double r) {
    Employee ee = e;
    ee += r;    // Uses overloaded operator
    return ee;
}

// - overload the + operator for a double as the left operandand an Employee object as the right operand

Employee operator+(double r, const Employee& e) {
    return e + r;   // Uses the previous overloaded operator.
}