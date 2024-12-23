/*Yakubovskaya Anastasya st130155@student.spbu.ru Zadacha6*/

#include <vector>
#include <iostream>
#include "13Classes.h"


bool Class1::bar(int num, const std::vector<float>&)
{
    return num > 0;
}

int Class1::c_1_1()
{
    return 1;
}

float Class1::c_1_2()
{
    return 1.0f;
}

void Class1::c_1_3() 
{
   std::cout << "method c_1_3" << std::endl; 
}

bool Class2::bar(int num, const std::vector<float>& vec)
{
    return !vec.empty();
}

int Class2::c_2_1()
{
    return 2;
}

float Class2::c_2_2()
{
    return 2.0f;
}

void Class2::c_2_3() 
{
    std::cout << "method c_1_2" << std::endl;
}

bool Class3::bar(int num, const std::vector<float>& vec)
{
    return num == (-1)*static_cast<int>(vec.size());
}

int Class3::c_3_1()
{
    return 3;
}

float Class3::c_3_2()
{
    return 3.0f;
}

void Class3::c_3_3() 
{
    std::cout << "method c_3_3" << std::endl;
}



