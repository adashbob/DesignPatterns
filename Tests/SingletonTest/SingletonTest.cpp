#include <gtest/gtest.h>
#include <Singleton/Singleton.h>

TEST(SingletonTest, ConstructorCalledOnce){
    Singleton& obj1 = Singleton::getInstance();
    Singleton& obj2 = Singleton::getInstance();
    Singleton& obj3 = Singleton::getInstance();

    EXPECT_EQ(&obj1, &obj2);
    EXPECT_EQ(&obj2, &obj3);
}