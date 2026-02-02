#include <iostream>
using namespace std;
int x = 10;

class A {
public:
    static int s;
    void show();
};

int A::s = 0;

void A::show() {
    int x = 5;

    std::cout << "This is local variable x: " << x << std::endl;
    std::cout << "This is global variable x::x: " << ::x << std::endl;

    std::cout << " static variable using class name A::s" << std::endl;
    std::cout << "Static variable value: " << ++A::s << std::endl;
}

int main() {
    A a;

    std::cout << "Calling class function defined outside the class " << std::endl;
    a.show();

    return 0;
}
