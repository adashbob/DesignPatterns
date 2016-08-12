#include <gtest/gtest.h>
#include <Singleton/Connexion.h>

TEST(SingletonTest, ConstructorCalledOnce){
    Connexion& obj1 = Singleton<Connexion>::getInstance();
    Connexion& obj2 = Singleton<Connexion>::getInstance();
    Connexion& obj3 = Singleton<Connexion>::getInstance();

    EXPECT_EQ(&obj1, &obj2);
//    EXPECT_NE(&obj2, &obj3);
}