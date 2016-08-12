#ifndef DESIGNPATTERNS_SINGLETON_H
#define DESIGNPATTERNS_SINGLETON_H


class Singleton {
protected:
    static Singleton instance;
public:
    Singleton& getInstance() {
        return instance;
    }
    Singleton operator = (const Singleton& obj) {
        return  obj;
    }

private:
    ~Singleton();
    Singleton();

};


#endif //DESIGNPATTERNS_SINGLETON_H
