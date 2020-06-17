// Member Operator
// h8.cpp

#include <iostream>
using namespace std;
#include "Employee.h"

int main() {
    Employee null,
        mark(3456, "Mark"),
        rose(3457, "Rose", 10.70);
    null.display();
    cout << endl;
    null = null + 0.50;       // raise of 50 cents 
    null.display();
    cout << endl;
    mark.display();
    cout << endl;
    mark = mark + 0.50;       // raise of 50 cents 
    mark.display();
    cout << endl;
    rose.display();
    cout << endl;
    rose = rose + 0.50;       // raise of 50 cents 
    rose.display();
    cout << endl;
}