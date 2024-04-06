#include <iostream>

using namespace std;

class Base {
public:
    int i;
    Base(int i=0) : i(i) {}

    virtual void show() {
        cout << i << endl;
    }
};

class Derived : public Base {
public:
    int j;
    Derived(int i=0, int j=0) : Base(i), j(j) {}

    void show() {
        cout << i << endl << j << endl;
    }

    void something() {
        cout << j << endl;
    }
};

int main() {
    Base *b_ptr = new Derived(1, 2);

    b_ptr->show();
    Derived *d_ptr = (Derived *)b_ptr;

    d_ptr->something();



    delete b_ptr;
    return 0;
}