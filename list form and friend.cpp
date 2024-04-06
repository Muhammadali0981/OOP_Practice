/*trying to get the 
hang of advance oop things*/

#include <iostream>
using namespace std;


class myclass
{
private:
    int a;
    int b;
    std::string x;
    char y;

public:
    
    myclass() : a(10), b(420), x("ya ali madad"), y('R'){}

    void display(){
        std::cout << a << std::endl << b << std::endl << x << std::endl << y;
    
    }

    friend void friendfunction(myclass &obj);
};
class a{
    public 
}
void friendfunction(myclass &obj){
    obj.a++;
}

int main()
{
    myclass myobj;
    
    friendfunction(myobj);
    myobj.display();//prints a as 11
}

