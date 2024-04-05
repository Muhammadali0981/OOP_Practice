#include <iostream>

using namespace std;

class Ship {
private:
    string name, year;
public:
    Ship(){};
    Ship(string n, string y) : name(n), year(y) {}
    
    string getName() { return name; }
    
    virtual void print() {
        cout << name << '\n' << year << '\n';
    }
};

class CruiseShip : public Ship {
private:
    int passengers;
public:
    CruiseShip(string n, string y, int p) : Ship(n, y), passengers(p) {}

    void print() {
        cout << this->getName() << '\n' << passengers << '\n';
    }
};

class CargoShip : public Ship {
private:
    int cargo;
public:
    CargoShip(string n, string y, int c) : Ship(n, y), cargo(c) {}

    void print() {
        cout << this->getName() << '\n' << cargo << '\n';
    }
};

int main() {
    Ship *ships[3];
    
    ships[0] = new Ship("Ship 1", "2005");
    ships[1] = new CruiseShip("Ship 2", "2006", 20);
    ships[2] = new CargoShip("Ship 3", "2007", 30);
    
    for (int i = 0; i < 3; i++)
        ships[i]->print();

    return 0;
}