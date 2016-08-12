#ifndef DESIGNPATTERNS_SINGLETON_H
#define DESIGNPATTERNS_SINGLETON_H


class Singleton {

protected:
    static Singleton instance;
public:
    static Singleton& getInstance();
    Singleton operator = (const Singleton&){};
    Singleton(const Singleton&){};

private:
    ~Singleton();
    Singleton();

};


#endif //DESIGNPATTERNS_SINGLETON_H
