#include <iostream>

using namespace std;


int main()
{
    int a;


    cout << "enter a:" << endl;
    cin >> a;


    try{
        if (a == 0) throw "error";

    }

    catch(const char* x){
        cout << "x" << endl;
    }

    return 0;
}


