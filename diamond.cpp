#include <iostream>

using namespace std;

class a
{
private:
    int a;
public:
    void seta(int x){
        a = x;
    }

    int geta(){
        return a;
    }

    void function(){
        cout << "this is a" <<  endl;
    }
};

class b : virtual public a
{
public:
    void function(){
        cout << "this is b" << endl;
    }

};

class c : virtual public a{};

class d:public b,public c{

};

int main(){

    d objectofd;
    objectofd.seta(12);
    cout << objectofd.geta() << endl;
   
   
}