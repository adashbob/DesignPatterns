#include <iostream>
#include <Singleton/Singleton.h>
#include <Singleton/Connexion.h>

using namespace std;

int main() {
    Connexion& obj1 = Singleton<Connexion>::getInstance();
    Connexion& obj2 = Singleton<Connexion>::getInstance();
    Connexion& obj3 = Singleton<Connexion>::getInstance();

    cout<< " obj1 : " << &obj1 << endl;
    cout<< " obj1 : " << &obj2 << endl;
    cout<< " obj1 : " << &obj3 << endl;
}