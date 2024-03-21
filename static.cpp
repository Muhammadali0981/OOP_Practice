#include <iostream>


using namespace std;

class person
{
private:
    string name;
    int age;
    static string country;
public:
    void setname(string naam){
        name = naam;
    }
    void setage(int umr){
        age = umr;
    }
   
    void setcountry(string mulk){
        country = mulk;
    }
    void display(){
        cout << "name:" << name << endl;
        cout << "age:" << age << endl;
        cout << "country:" << country << endl;

    }

    static void updatecountry(string nayamulk){
        country = nayamulk;
    }
};

string person::country = "pakistan";

int main(){
    person insaan;
    insaan.setname("ali");
    insaan.setage(18);
    insaan.setcountry("pak");
    insaan.display();
    insaan.updatecountry("amerika");
    insaan.display();
}
