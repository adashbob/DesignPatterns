#include <iostream>
#include <Singleton/Singleton.h>

using namespace std;

int main() {
    Singleton& obj1 = Singleton::getInstance();
    Singleton& obj2 = Singleton::getInstance();
    Singleton& obj3 = Singleton::getInstance();

    cout<< " obj1 : " << &obj1 << endl;
    cout<< " obj1 : " << &obj2 << endl;
    cout<< " obj1 : " << &obj3 << endl;
}