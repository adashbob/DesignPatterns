#ifndef DESIGNPATTERNS_SINGLETON_H
#define DESIGNPATTERNS_SINGLETON_H


template <typename T> class Singleton {

protected:
    static T instance;

public:
    static T& getInstance();
    T& operator = (const T&){};

};




#endif //DESIGNPATTERNS_SINGLETON_H
