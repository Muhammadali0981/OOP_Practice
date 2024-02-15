/*trying to get the 
hang of advance oop things*/

#include <iostream>

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
    friend class yourclass;
};

class yourclass{
public:
    void increments(myclass &a){
        a.a += 1;
    }

};

int main()
{
    myclass myobj;
    yourclass yourobj;
    yourobj.increments(myobj);
    myobj.display();//prints a as 11
}

