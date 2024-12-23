/*Yakubovskaya Anastasya st130155@student.spbu.ru Zadacha6*/

#include "gtest/gtest.h"
#include "Class.h"
#include "13Classes.h"

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

class TestClass
{
public:
    bool bar(int num, const std::vector<float>& vec)
    {
        return num > 0 && !vec.empty();
    }
};


TEST(MyClassTest, rTrue)
{
    std::vector<float> v = {1.0f};
    TestClass obj;
    MyClass<TestClass> myClass(obj, 1, v);
    EXPECT_TRUE(myClass.foo());
}

TEST(MyClassTest, r2False)
{
    std::vector<float> v = {};
    TestClass obj;
    MyClass<TestClass> myClass(obj, -1, v);
    EXPECT_FALSE(myClass.foo());
}

TEST(MyClassTest, r3True)
{
    std::vector<float> emptyV;
    MyClass<int> myClass(1, 1, emptyV);
    EXPECT_TRUE(myClass.foo());
}

TEST(MyClassTest, r4False)
{
    std::vector<float> emptyV;
    MyClass<double> myClass(1.1, 1.1, emptyV);
    EXPECT_FALSE(myClass.foo());
}

TEST(Class1Test, r5True) 
{ 
    std::vector<float> v = {1.0f};  
    Class1 obj; 
    EXPECT_TRUE(obj.bar(1, v)); 
} 
 
TEST(Class1Test, r6False) 
{ 
    std::vector<float> v = {}; 
    Class1 obj; 
    EXPECT_FALSE(obj.bar(-1, v));  
} 
 
TEST(Class2Test, r7True) 
{ 
    std::vector<float> v = {1.0f};   
    Class2 obj; 
    EXPECT_TRUE(obj.bar(1, v));
} 
 
TEST(Class2Test, r8False) 
{ 
    std::vector<float> v = {};   
    Class2 obj; 
    EXPECT_FALSE(obj.bar(1, v)); 
} 
 

TEST(Class3Test, r9True) 
{ 
    std::vector<float> v = {1.0f}; 
    Class3 obj; 
    EXPECT_TRUE(obj.bar(-1, v));  
} 
 
TEST(Class3Test, r10False) 
{ 
    std::vector<float> v = {1.0f}; 
    Class3 obj; 
    EXPECT_FALSE(obj.bar(1, v)); 
}

