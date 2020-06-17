// Member Operators
// Employee.h

const double MIN_WAGE = 10.25;
const int    MAX_NAME = 20;

class Employee {
    int no;
    char name[MAX_NAME + 1];
    double rate;
public:
    Employee();
    Employee(int, const char*);
    Employee(int, const char*, double);
    void display() const;
    Employee& operator+=(double);
};

// Helper operator prototypes are defined OUTSIDE the class.
Employee operator+(const Employee&, double);
Employee operator+(double, const Employee&);