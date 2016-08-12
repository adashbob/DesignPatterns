#ifndef DESIGNPATTERNS_CONNEXION_H
#define DESIGNPATTERNS_CONNEXION_H


#include "Singleton.h"

class Connexion : public Singleton<Connexion>{
friend class Singleton<Connexion>;

private:
    Connexion(const Connexion&){};
    Connexion();
    ~Connexion();
};


#endif //DESIGNPATTERNS_CONNEXION_H
