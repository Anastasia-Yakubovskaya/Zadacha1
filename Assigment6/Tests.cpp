#include "gtest/gtest.h" 
#include "Class.h" 
#include "13Classes.h" 
  
int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
 
TEST(MyClassTest, rTrue) 
{ 
    std::vector<float> v = {1.0f}; 
    Class1 obj;  
    MyClass<Class1> myClass(obj, 1, v);  
    EXPECT_TRUE(myClass.foo());  
} 
 
 
TEST(MyClassTest, r1False) 
{ 
    std::vector<float> emptyV; 
    Class3 obj;  
    MyClass<Class3> myClass(obj, -1, emptyV);  
    EXPECT_FALSE(myClass.foo());  
} 
 
TEST(Class1Test, r1True)  
{  
    std::vector<float> v = {1.0f};   
    Class1 obj;  
    EXPECT_TRUE(obj.bar(1, v));  
}  
  
TEST(Class1Test, r3False)  
{  
    std::vector<float> v = {};  
    Class1 obj;  
    EXPECT_FALSE(obj.bar(-1, v));  
}  
  
TEST(Class2Test, r4True)  
{  
    std::vector<float> v = {1.0f};    
    Class2 obj;  
    EXPECT_TRUE(obj.bar(1, v)); 
}  
  
TEST(Class2Test, r5False)  
{  
    std::vector<float> v = {};    
    Class2 obj;  
    EXPECT_FALSE(obj.bar(1, v));  
}  
 
TEST(Class3Test, r6True) 
{ 
    std::vector<float> v = {1.0f}; 
    Class3 obj; 
    EXPECT_TRUE(obj.bar(-1, v)); 
} 
 
TEST(Class3Test, r7False) 
{ 
    std::vector<float> v = {1.0f}; 
    Class3 obj; 
    EXPECT_FALSE(obj.bar(1, v)); 
}
