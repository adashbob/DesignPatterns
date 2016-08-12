#include <iostream>
#include "Singleton.h"

using namespace std;


Singleton Singleton::instance = Singleton();

Singleton::~Singleton() {
    cout<< "Création de : " << this << endl;
}

Singleton::Singleton() {
    cout << "Destruction de : " << this << endl;
}

Singleton &Singleton::getInstance() {
    return instance;
}
