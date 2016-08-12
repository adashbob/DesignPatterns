
#include <iostream>
#include "Connexion.h"

using namespace std;

/**
 *
 * @return
 */
template <typename T> T& Singleton<T>::getInstance() {
    return instance;
}

template <typename T> T Singleton<T>::instance = T();

Connexion::~Connexion() {
    cout << "Destruction de : " << this << endl;
}

Connexion::Connexion() {
    cout<< "Création de : " << this << endl;
}