#include <iostream>
#include <Singleton/Singleton.h>
#include <Singleton/Connexion.h>

int main() {
    Singleton<Connexion>& obj1 = Singleton<Connexion>::getInstance();
    Singleton<Connexion>& obj2 = Singleton<Connexion>::getInstance();
    Singleton<Connexion>& obj3 = Singleton<Connexion>::getInstance();
}