#include <iostream>


using namespace std;


class a{
    public:
    a(){
        cout << "hello this is a" << endl;
    }
};

class b:public a{
    public:
    b(){
        cout << "hello this is b" << endl;
    }
};

class c:public b{
    public:
    c(){
        cout << "hello this is c" << endl;
    }
};

int main()
{
    c objectofc;
    return 0;
}
