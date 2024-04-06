#include <iostream>

using namespace std;

class B;
class A {
private:
    int i;

    friend class B;
public:
    A(int i = 0) : i(i) {}

    void show_B_i(const B& obj);
};

class B {
private:
    int i;

    friend class A;
public:
    B(int i = 0) : i(i) {}

    void show_A_i(const A& obj);
};

void B::show_A_i(const A& obj) { cout << obj.i << endl; }
void A::show_B_i(const B& obj) { cout << obj.i << endl; }

int main() {
    A a(1);
    B b(2);

    a.show_B_i(b);
    b.show_A_i(a);

    return 0;
}