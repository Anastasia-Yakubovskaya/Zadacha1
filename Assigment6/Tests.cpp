/*Yakubovskaya Anastasya st130155@student.spbu.ru Zadacha6*/
#include "gtest/gtest.h" 
#include "Class.h" 
#include "13Classes.h" 
  
int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
 
 
TEST(MyClassTest, True) 
{ 
    std::vector<float> emptyV; 
    MyClass<int> cls(1, 1, emptyV);   
    EXPECT_TRUE(cls.foo());  
} 
 
TEST(MyClassTest, False) 
{ 
    std::vector<float> emptyV; 
    MyClass<double> cls(1.02, 1.01, emptyV);  
    EXPECT_FALSE(cls.foo());  
} 
 
TEST(MyClassTest, Class1True) 
{ 
    std::vector<float> emptyV; 
    Class1 obj; 
    MyClass<Class1> a(obj, 10, emptyV); 
    EXPECT_TRUE(a.foo());  
} 
 
TEST(MyClassTest, Class1False) 
{ 
    std::vector<float> emptyV; 
    Class1 obj; 
    MyClass<Class1> a(obj, 0, emptyV);  
    EXPECT_FALSE(a.foo());   
} 
 
TEST(MyClassTest, Class2True) 
{ 
    std::vector<float> v = {1.01}; 
    Class2 obj; 
    MyClass<Class2> a(obj, 10, v);  
    EXPECT_TRUE(a.foo());  
} 
 
TEST(MyClassTest, Class2False) 
{ 
    std::vector<float> v = {}; 
    Class2 obj; 
    MyClass<Class2> a(obj, 10, v); 
    EXPECT_FALSE(a.foo());  
} 
 
TEST(MyClassTest, Class3True) 
{ 
    std::vector<float> v = {1.01}; 
    Class3 obj; 
    MyClass<Class3> a(obj, -1, v);  
    EXPECT_TRUE(a.foo());  
} 
 
TEST(MyClassTest, Class3False) 
{ 
    std::vector<float> v = {1.01}; 
    Class3 obj; 
    MyClass<Class3> a(obj, 10, v);  
    EXPECT_FALSE(a.foo());  
}
