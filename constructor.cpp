#include <iostream>


using namespace std;

class hello
{
private:
    int data;
    int m;
public:
    hello(){
        data =1;
        m = 0;
    }
    hello(int a){
        data = a;
    }

    int get(){
        return data;
    }

    int getm(){
        return m;
    }
};

int main()
{
    hello me(2);
    cout << me.get() << endl;
    cout << "m="<< me.getm();
    return 0;
}
