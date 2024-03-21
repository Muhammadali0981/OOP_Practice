#include <iostream>


using namespace std;

class insaan{
private:
    int age;
    string name;

public:

    void setage(int a){
        age = a;
    }

    void setname(string n){
        name = n;
    }
    int getage(){
        return age;
    }

    string getname(){
        return name;
    }


};

class student : public insaan{
private:
    int education_level;
public:
    void sete(int e){
        education_level = e;
    }

    void display(){
        cout << getage() << endl;
        cout << getname() << endl;
        cout << education_level << endl;
    }
};

int main(){
    student s;
    s.setage(10);
    s.setname("ali");
    s.sete(14);
    s.display();
}