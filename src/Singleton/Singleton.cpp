//
// Created by bobo on 12/08/16.
//

#include "Singleton.h"

Singleton Singleton::instance = Singleton();

Singleton::~Singleton() {
    cout << "Création de : " << this << endl;
}

Singleton::Singleton() {

}
