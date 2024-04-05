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

class b : public a
{
public:
    void function(){
        cout << "this is b" << endl;
    }

};

class c : public a{};

class d:public b,public c{

};

int main(){

    d objectofd;
    objectofd.b::seta(12);
    cout << objectofd.b::geta() << endl;
   
   
}